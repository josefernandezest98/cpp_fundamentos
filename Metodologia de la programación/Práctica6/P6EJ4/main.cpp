#include <iostream>
#include <cstdlib>

using namespace std;

float potencia(int);

int main()
{
    int n;
    float suma;
    suma = 0;
    cout << "Introduzca el numero de terminos a sumar n = ";
    cin >> n;
    for (int i = 1;i <= n; i = i + 1)
    {
        suma = suma + potencia(i);
    }
    cout << suma << endl;
}

float potencia(int num)
{
    int numerador, denominador;
    float resultado;
    numerador = num;
    denominador = 1;
    for (int i = 1;i <= num;i = i + 1)
    {
        denominador = denominador * 2;
    }
    resultado = numerador / denominador;
    return(resultado);
}
