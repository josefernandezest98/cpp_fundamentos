#include <iostream>
#include <cstdlib>

using namespace std;

int mcd(int,int);
void reduce_quebrado(int &,int &,int);
void escribir_quebrado(int &,int&);
void leer_quebrado(int &,int &);
void suma(int,int,int,int);
void resta(int,int,int,int);
void multiplica(int,int,int,int);
void divide(int,int,int,int);

int main()
{
   int num1, den1, num2, den2, mcdivisor;
   leer_quebrado(num1,den1);
   mcd(num1,den1);
   reduce_quebrado(num1,den1,mcdivisor);
   escribir_quebrado(num1,den1);
system("PAUSE");
return 0;
}

void leer_quebrado(int & num,int & den)
{
    cout << "Numerador = ";
    cin >> num;
    cout << "Denominador = ";
    cin >> den;
}

void escribir_quebrado(int & num,int & den)
{
    cout << num <<"/" << den << endl;
}

int mcd(int num,int den)
{
    int resto;
    do
    {
       resto = num % den;
       num = den;
       den = resto;
       resto = resto;
    }while(!(resto == 0));
    return(num);
}

void reduce_quebrado(int & num,int & den,int mcdivisor)
{
    num = num / mcdivisor;
    den = den / mcdivisor;
}
