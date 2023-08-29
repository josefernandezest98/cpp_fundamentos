#include <iostream>
#include <cstdlib>
using namespace std;

struct tTiempo
{
    int horas;
    int minutos;
    int segundos;
};

void leerTiempo(tTiempo &);
void escribirTiempo(tTiempo &);
tTiempo sumarTiempo(tTiempo,int);

int main()
{
    tTiempo tiempo1,tiempo2;
    int segundos;
    leerTiempo(tiempo1);
    escribirTiempo(tiempo1);
    cout << "Introduzca segundos a sumar: ";
    cin >> segundos;
    tiempo2 = sumarTiempo(tiempo1,segundos);
    escribirTiempo(tiempo2);
system("PAUSE");
return 0;
}

void leerTiempo(tTiempo & tiempo)
{
    cout << "Introduzca horas = ";
    cin >> tiempo.horas;
    cout << "Introduzca minutos = ";
    cin >> tiempo.minutos;
    cout << "Introduzca segundos = ";
    cin >> tiempo.segundos;
}

void escribirTiempo(tTiempo & tiempo)
{
    cout << tiempo.horas << ":";
    cout << tiempo.minutos << ":";
    cout << tiempo.segundos << endl;
}
 tTiempo sumarTiempo(tTiempo tiempo,int segundos)
 {
     if(segundos < 60)
     {
         tiempo.segundos = tiempo.segundos + segundos;
         if(tiempo.segundos >= 60)
         {
             tiempo.minutos = tiempo.minutos + 1;
             tiempo.segundos = tiempo.segundos  - 60;
         }
     }
     if((segundos>=60)&&(segundos<3600))
     {
         tiempo.minutos = tiempo.minutos + segundos / 60;
         if(tiempo.minutos >= 60)
         {
             tiempo.horas = tiempo.horas + 1;
             tiempo.minutos = tiempo.minutos - 60;
         }
         tiempo.segundos = tiempo.segundos + segundos % 60;
         if(tiempo.segundos >= 60)
         {
             tiempo.minutos = tiempo.minutos + 1;
             tiempo.segundos = tiempo.segundos  - 60;
         }
    if(segundos>=3600)
     {
             tiempo.horas = tiempo.horas + (segundos / 3600);
             tiempo.minutos = tiempo.minutos + (segundos % 3600) / 60;
             if(tiempo.minutos >= 60)
         {
             tiempo.horas = tiempo.horas + 1;
             tiempo.minutos = tiempo.minutos - 60;
         }
             tiempo.segundos = tiempo.segundos + (segundos % 3600) % 60;
             if(tiempo.segundos >= 60)
         {
             tiempo.minutos = tiempo.minutos + 1;
             tiempo.segundos = tiempo.segundos  - 60;
         }
     }
     }
     return(tiempo);
 }
