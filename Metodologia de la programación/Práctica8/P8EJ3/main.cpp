#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct tComplejo
{
    float pReal;
    float pimaginaria;
};

void leerComplejo(tComplejo &);
void escribirComplejo(tComplejo &);
tComplejo suma(tComplejo,tComplejo);

int main()
{
    tComplejo num1,num2,resultado;
    leerComplejo(num1);
    escribirComplejo(num1);
    leerComplejo(num2);
    escribirComplejo(num2);
    resultado = suma(num1,num2);
    escribirComplejo(resultado);
}

void leerComplejo(tComplejo & numero)
{
    cout << "Parte real = ";
    cin >> numero.pReal;
    cout << "Parte imaginaria = ";
    cin >> numero.pimaginaria;
}

void escribirComplejo(tComplejo & numero)
{
    cout << numero.pReal << " + " << numero.pimaginaria << "i" << endl;
}

tComplejo suma(tComplejo num1,tComplejo num2)
{
    tComplejo resultado;
    resultado.pReal = num1.pReal + num2.pReal;
    resultado.pimaginaria = num1.pimaginaria + num2.pimaginaria;
    return(resultado);
}
