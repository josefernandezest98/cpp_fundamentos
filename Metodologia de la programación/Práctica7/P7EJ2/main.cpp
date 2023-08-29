#include <iostream>
#include <cstdlib>
using namespace std;

void lee_vector(int);
float media_vector(int [],int);

int lista[100];

int main()
{
    int n;
    float media;

    do
    {
        cout << endl << "¿Cuantos elementos? = ";
        cin >> n;
    }while(!((n >= 1)&&(n <= 100)));

    lee_vector(n);
    media = media_vector(lista,n);

    cout << endl << "La media de los " << n << " numeros es = " << media << ". ";
    system("PAUSE");
    return 0;
}

void lee_vector(int n)
{
    for(int i = 0;i < n;i = i + 1)
    {
        cout << endl << "Introduce elemento: " << i;
        cin >> lista[i];
    }
}

float media_vector(int v[],int n)
{
    float media;
    int suma;
    suma = 0;
    media = 0;
    for(int i = 0;i <= n;i = i + 1)
    {
        suma = suma + v[i];
    }
    media = suma / n;
    return(media);
}

