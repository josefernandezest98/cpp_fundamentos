#include <iostream>
#include <cstdlib>

using namespace std;

char calculaNIF(long);

int main()
{
    long DNI;
    char letraNIF;
    cout << "Introduzca su DNI = ";
    cin >> DNI;
    letraNIF = calculaNIF(DNI);
    cout << letraNIF << endl;
system("PAUSE");
return 0;
}

char calculaNIF(long DNI)
{
    char tabla[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int resto;
    resto = DNI % 23;
    return(tabla[resto]);
}
