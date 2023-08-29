#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num;
    int c, d ,u;
    int numIn;
    cout << "Introduzca uun numero de tres cifras: ";
    cin >> num;
    c = num / 100;
    d = (num - c*100)/10;
    u = num % 10;
    numIn = 100*u + 10*d + c;
    cout << numIn;
    return 0;
}
