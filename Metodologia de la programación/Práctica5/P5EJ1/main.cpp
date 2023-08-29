#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char c;
    int num_a;
    cout << "Introduzca un texto: ";
    cin >> c;
    num_a = 0;
    while ( c != '.')
    {
        if( c == 'a')
        {
            num_a = num_a + 1;
        }
        cin >> c;
    }
    cout << num_a;
system ("PAUSE");
return 0;
}
