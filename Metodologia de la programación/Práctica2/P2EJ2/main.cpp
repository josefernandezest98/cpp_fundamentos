#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int tiempo;
    int horas, minutos, segundos;
    int auxiliar;
    cout << "Introduzca el numero de segundos: ";
    cin >> tiempo;
    horas = tiempo / 3600;
    auxiliar = tiempo % 3600;
    minutos = auxiliar / 60;
    segundos = auxiliar % 60;
    cout << horas << minutos << segundos;
    return 0;
}
