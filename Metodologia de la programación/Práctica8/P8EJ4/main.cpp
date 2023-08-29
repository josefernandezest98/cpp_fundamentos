#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct tCliente
{
    char nombre [30];
    long dni;
    char nif;
    long importe;
};

void mejorCliente(tCliente [],int);
void peorCliente(tCliente [],int);
void mejoresClientes(tCliente [],int,long);
char Calcula_NIF(long);
long polizaMedia(tCliente [],int);
void leerCliente(tCliente &);
void leerCartera(tCliente [],int);
void escribirCliente(tCliente);

int main()
{
    tCliente carteraClientes[40];
    long importeMedio;
    int n;
    do{
        cout << "Intruduzca el numero de clientes n = ";
        cin >> n;
    }while(!(n >= 0));
    leerCartera(carteraClientes,n);
    importeMedio = polizaMedia(carteraClientes,n);
    cout << "La poliza media es de: " << importeMedio << " euros" << endl;
    mejoresClientes(carteraClientes,n,importeMedio);
    mejorCliente(carteraClientes,n);
    peorCliente(carteraClientes,n);
system("PAUSE");
return 0;
}

void leerCartera(tCliente cartera[],int n)
{
    for(int i = 0;i < n;i = i + 1)
    {
        cout << "Introduzca un nuevo cliente: " << endl;
        leerCliente(cartera[i]);
        system("cls");
    }
}

char Calcula_NIF(long DNI)
{
	char tabla[]="TRWAGNYFPDXBNJZSQVHLCKE";
	int resto;
	resto=DNI%23;
	return(tabla[resto]);
}

void leerCliente(tCliente & cliente)
{
    cout << "Nombre: ";
    fflush(stdin);
    gets(cliente.nombre);
    cout << "DNI: ";
    cin >> cliente.dni;
    cliente.nif = Calcula_NIF(cliente.dni);
    cout << "Importe: ";
    cin >> cliente.importe;
}

void escribirCliente(tCliente cliente)
{
    cout << "===================================================================" << endl;
    cout << "Nombre: " << cliente.nombre << endl;
    cout << "DNI: " << cliente.dni << " " << cliente.nif << endl;
    cout << "Poliza: " << cliente.importe << " euros" << endl;
    cout << "===================================================================" << endl;
}

long polizaMedia(tCliente cartera[],int n)
{
    long media, fin;
    media = 0;
    for(int i = 0;i < n;i = i + 1)
    {
        media = media + cartera[i].importe;
    }
    fin = media / n;
    return(fin);
}

void mejoresClientes(tCliente cartera[],int n,long importeMedio)
{
    cout << "Los mejores clientes son: " << endl;
    for (int i = 0;i < n;i = i + 1)
    {
        if(cartera[i].importe >= importeMedio)
        {
            escribirCliente(cartera[i]);
        }
    }
}

void mejorCliente(tCliente cartera[],int n)
{
    tCliente mejor;
    int i;
    i = 0;
    mejor = cartera[i];
    while(i < n)
    {
        if(cartera[i].importe > mejor.importe)
        {
            mejor = cartera[i];
        }
     i = i + 1;
    }
    cout << "El mejor cliente es: " << endl;
    escribirCliente(mejor);
}
void peorCliente(tCliente cartera[],int n)
{
    tCliente peor;
    int i;
    i = 0;
    peor = cartera[i];
    while(i < n)
    {
        if(cartera[i].importe < peor.importe)
        {
            peor = cartera[i];
        }
     i = i + 1;
    }
    cout << "El peor cliente es: " << endl;
    escribirCliente(peor);
}
