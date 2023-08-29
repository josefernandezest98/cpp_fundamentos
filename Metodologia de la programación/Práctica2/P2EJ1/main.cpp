#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char letra;
    int posicion;
    cout << "Introduzca una letra mayuscula: ";
    cin >> letra;
    posicion = int(letra) - int('A') + 1;
    cout << posicion;
    return 0;
}
