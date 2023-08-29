#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y, potencia, contador;
    cout << "Introduzca los valores de x, y: " << endl << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    contador = 1;
    potencia = 1;
    while(contador <= y)
    {
        potencia = potencia * x;
        contador = contador + 1;
    }
    cout << potencia << " ";
    system("PAUSE");
    return 0;

}
