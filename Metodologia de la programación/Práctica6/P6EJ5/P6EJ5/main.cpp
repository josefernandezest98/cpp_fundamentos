#include <iostream>
#include <cstdlib>
using namespace std;

void escribir_complejo(float pr,float pi);
void leer_complejo(float pr,float pi);
void suma(float,float,float,float);
void resta(float,float,float,float);
void multiplica(float,float,float,float);
void divide(float,float,float,float);

int main()
{
 float n1pr, n1pi, n2pr, n2pi;
 float solpr, solpi;
 char operacion;
 leer_complejo (n1pr,n1pi);
 leer_complejo (n2pr,n2pi);
 cin.unsetf(ios::skipws); //Evita que cin ignore espacios en blanco
 do
 {
 cout<<"Introduce la operación";
 cin>>operacion;
 }while(! ((operacion=='+')||(operacion=='-')||(operacion=='*')||(operacion=='/')));
 switch (operacion)
 {
 case '+':
 {
 suma(n1pr,n1pi,n2pr,n2pi);
 }
 break;
 case '-':
 {
 resta(n1pr,n1pi,n2pr,n2pi);
 }
 break;
 case '*':
 {
 multiplica(n1pr,n1pi,n2pr,n2pi);
 }
 break;
 case '/':
 {
 divide(n1pr,n1pi,n2pr,n2pi);
 }
 break;
 }
 escribir_complejo(solpr, solpi);
system("PAUSE");
 return 0;
}
void escribir_complejo (float pr, float pi)
{
    cout<<pr;
    if (pi>=0.)
         {
         cout<<'+';
         }
    cout<<pi<<'i';
}

void leer_complejo (float pr,float pi)
{
 cout<<endl<<"Introduce la parte real";
 cin>>pr;
 cout<<endl<<"Introduce la parte imaginaria";
 cin>>pi;
}

void suma (float pr1,float pi1,float pr2,float pi2)
{
 sr = pr1 + pr2;
 si = pi1 + pi2;
}

void resta (float pr1,float pi1,float pr2,float pi2)
{
 sr = pr1 - pr2;
 si = pi1 - pi2;
}

void multiplica (float pr1,float pi1,float pr2,float pi2)
{
 sr = pr1*pr2 - pi1*pi2;
 si = pi1*pr2 + pi2*pr1;
}

void divide (float pr1,float pi1,float pr2,float pi2)
{
 sr = (pr1*pr2 + pi1*pi2)/(pr2*pr2+pi2*pi2);
 si = (pr2*pi1 - pi2*pr1)/(pr2*pr2+pi2*pi2);
}
