#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, numDigit;
    numDigit = 1;
    cout << "Introduzca un número entero n = ";
    cin >> n;
    while (n >= 10)
    {
        n = n / 10;
        numDigit = numDigit + 1;
    }
    cout << numDigit << " ";
    system("PAUSE");
    return 0;
}
