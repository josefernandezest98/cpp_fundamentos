#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

bool esAnagrama (char [],char []);
void leerPalabra (char  []);

int main()
{
    char palabra1[100];
    char palabra2[100];
    bool resultado;
    leerPalabra(palabra1);
    leerPalabra(palabra2);
    resultado = esAnagrama(palabra1,palabra2);
    cout << resultado << endl;
system("PAUSE");
return 0;
}

void leerPalabra(char  lista[])
{
    cout << "Introduzca una palabra: ";
    gets(lista);
}

bool esAnagrama(char palabra1[],char palabra2[])
{
    bool anagrama;
    int j;
    j = 0;
    for(int i = 0;i < strlen(palabra2);i = i + 1)
    {
        if(palabra1[j] == palabra2[i])
        {
            j = j + 1;
            anagrama = true;
        }
        else
        {
            anagrama = false;
        }
    }
    return(anagrama);
}
