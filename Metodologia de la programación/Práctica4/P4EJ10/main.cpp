#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, contador;
    contador = 2;
    cout << "Introduzca un número entero: n = ";
    cin >> n;
    if((contador < n-1)&&(n % contador != 0))
    {
        contador = contador + 1;
        cout << "n es primo ";
    }
    if((contador < n-1)&&(n % contador == 0))
    {
        contador = contador + 1;
        cout << "n no es primo ";
    }
system("PAUSE");
return 0;
}
