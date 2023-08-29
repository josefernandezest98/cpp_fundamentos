#include <iostream>

using namespace std;

int main()
{
    int num, numIn;
    int d, u;
    cout << "Introduzca un numero de dos cifras: n = ";
    cin >> num;
    d = num / 10;
    u = num % 10;
    numIn = 10*u + d;
    cout << numIn;
    return 0;
}
