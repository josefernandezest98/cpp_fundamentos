#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num, numIn;
    int d, u;
    cout << "Introduzca un numero de dos cifras: n = ";
    cin >> num;
    if ((num >= 10)&&(num <= 99))
    {
        d = num / 10;
        u = num % 10;
        numIn = 10*u + d;
        cout << numIn;
    }
    else
    {
        cout << "El numero no es de dos cifras";
    }
    return 0;
}
