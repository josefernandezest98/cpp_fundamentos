#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char minusc, mayus;
    cout << "Introduzca una letra minuscula: ";
    cin >> minusc;
    mayus = char(int(minusc) - int('a') + int('A'));
    cout << mayus;
 return 0;
}
