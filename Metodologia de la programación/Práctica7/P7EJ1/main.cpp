#include <iostream>
#include <cstdlib>
using namespace std;

char calculoletraNIF(int);

int main()
{
    long DNI;
    char letraNIF;
    do{
        cout << "Introduzca su DNI = ";
        cin >> DNI;
    }while(!((0<=DNI)&&(DNI<=99999999)));
    letraNIF = calculoletraNIF(DNI);
    cout << letraNIF << ". ";
    system("PAUSE");
    return 0;
}

char calculoletraNIF(int DNI)
{
    char tabla[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int resto;
    resto = DNI % 23;
    return(tabla[resto]);
}
