#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Introduzca dos numeros: " << endl << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;
    if (n1 % n2 == 0)
    {
        cout << "Son divisibles ";
    }
    if (n2 % n1 == 0)
    {
        cout << "Son divisibles ";
    }
    else if ((n1 % n2 != 0)&&(n2 % n1 != 0))
    {
        cout << "No son divisibles ";
    }
    system("PAUSE");
    return 0;
}
