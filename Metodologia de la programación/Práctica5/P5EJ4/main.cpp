#include <iostream>
#include <cstdlib>
using namespace std;

using namespace std;

int main()
{
    bool todos_pares;
    int n;
    todos_pares = true;
    cin >> n;
    while ((n != 0)&&(todos_pares == true))
           {
               if(n % 2 == 1)
                {
                    todos_pares = false;
                }
                cin >> n;
           }
    cout << todos_pares;
system("PAUSE");
return 0;
}
