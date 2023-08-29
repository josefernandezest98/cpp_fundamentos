#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

void eliminaBlancos (char []);
bool palindromo (char []);

int main()
{
    char frase[50];
    cout << "Introduzca una frase: ";
    gets(frase);
    eliminaBlancos(frase);
    cout << frase;
    /*if (palindromo(frase) == true)
    {
        cout << "Es palindromo. ";
    }
    else
    {
        cout << "No es palindromo. ";
    }*/
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

void eliminaBlancos(char frase[])
{
    int j;
    j = 0;
    for(int i = 0;i < (strlen(frase));i = i + 1)
    {
        if(frase[i] != ' ')
        {
            frase[j] = frase[i];
            j = j + 1;
        }
    }
    j++;
    frase[j] = '\0';
}
