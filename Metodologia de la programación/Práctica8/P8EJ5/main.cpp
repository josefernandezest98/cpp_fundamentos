#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct tCorredor
{
    char nombre[30];
    int dorsal;
    char equipo[30];
    int tiempo;
    int diferencia;
};

void leerCorredor(tCorredor &);
void escribirCorredor(tCorredor);
void escribirPeloton(tCorredor [],int);

tCorredor lider(tCorredor [],int);
void diferencia(tCorredor,tCorredor [],int);

int main()
{
    tCorredor tPeloton[100],liderPrueba;
    int n;
    cout << "Introduzca el numero de corredores n = ";
    cin >> n;
    escribirPeloton(tPeloton,n);
    liderPrueba = lider(tPeloton,n);
    diferencia(liderPrueba,tPeloton,n);
    escribirCorredor(liderPrueba);
    for(int i = 0;i < n;i = i + 1)
    {
        escribirCorredor(tPeloton[i]);
    }
system("PAUSE");
return 0;
}

void escribirPeloton(tCorredor peloton[],int n)
{
    for(int i = 0;i < n;i = i + 1)
    {
        cout << "Introduzca el corredor: " << endl;
        leerCorredor(peloton[i]);
        system("cls");
    }
}

void leerCorredor(tCorredor & corredor)
{
    cout << "Introduce el nombre: ";
    fflush(stdin);
    gets(corredor.nombre);
    cout << "Introduce el dorsal: ";
    cin >> corredor.dorsal;
    cout << "Introduce el equipo: ";
    fflush(stdin);
    gets(corredor.equipo);
    cout << "Introduce el tiempo invertido: ";
    cin >> corredor.tiempo;

}

void escribirCorredor(tCorredor corredor)
{
    cout << "Nombre: " << corredor.nombre << endl;
    cout << "Dorsal: " << corredor.dorsal << endl;
    cout << "Equipo: " << corredor.equipo << endl;
    cout << "Tiempo: " << corredor.tiempo << endl;
    cout << "Diferencia:" << corredor.diferencia << endl;
}

tCorredor lider(tCorredor peloton[],int n)
{
    int j;
    j = 0;
    for(int i = 0;i < n;i = i + 1)
    {
        if(peloton[i].tiempo < peloton[j].tiempo)
        {
            j = i;
        }
    }
    return(peloton[j]);
}

void diferencia(tCorredor lider,tCorredor peloton[],int n)
{
    int j;
    j = 0;
    for(int i = 0;i < n;i = i + 1)
    {
        peloton[i].diferencia = peloton[i].tiempo - lider.tiempo;
    }
}
