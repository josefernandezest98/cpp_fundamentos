#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int num_unos;
    cout << "Introduzca una secuencia de números: ";
    cin >> n;
    num_unos = 0;
    while ( n != 0)
    {
        if(  n == 1 )
        {
            num_unos = num_unos + 1;
        }
        cin >> n;
    }
    cout << num_unos;
system("PAUSE");
return 0;
}
