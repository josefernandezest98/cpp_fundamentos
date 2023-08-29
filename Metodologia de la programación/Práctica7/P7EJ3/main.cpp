#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

bool palindromo (char []);

int main()
{
    char palabra[20];
    cout << "Introduzca una palabra: ";
    gets(palabra);
    if (palindromo(palabra) == true)
    {
        cout << "Es palindromo. ";
    }
    else
    {
        cout << "No es palindromo. ";
    }
    system("PAUSE");
    return 0;
}

bool palindromo(char palabra[])
{
    bool palindromosiono;
    int izq, der;
    izq = 0;
    der = strlen(palabra) - 1;
    palindromosiono = true;

    while ((palindromosiono == true)&&(izq < der))
    {
        if(palabra[izq] == palabra[der])
        {
            izq = izq + 1;
            der = der - 1;
        }
       else
        {
            palindromosiono = false;
        }
    }

    return(palindromosiono);
}
