#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t;
    cout << "Introduzca la temperatura = ";
    cin >> t;
    if(t <= 0)
    {
        cout << "Demasiado frio ";
    }
    else if ((t > 0)&&(t <= 10))
    {
        cout << "Frio ";
    }
    else if ((t > 10)&&(t <= 25))
    {
        cout << "Agradable ";
    }
    else if ((t > 25)&&(t <= 35))
    {
        cout << "Calor ";
    }
    else if (t > 35)
    {
        cout << "Demasiado calor ";
    }
    system("PAUSE");
    return 0;
}

