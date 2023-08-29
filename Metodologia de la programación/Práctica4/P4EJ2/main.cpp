#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, cociente, resto;
    cout << "Introduzca los valores de a, b: " << endl << "a = ";
    cin >> a,
    cout << "b = ";
    cin >> b;
    cociente = 0;
    while (a >= b)
    {
        a = a - b;
        cociente = cociente + 1;
    }
    resto = a;
    cout << cociente << ", " << resto;
    system("PAUSE");
    return 0;
}
