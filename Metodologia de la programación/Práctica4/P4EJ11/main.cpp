#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, c, d, u;
    n = 100;
    while (n < 1000)
    {
        n = n + 1;
        c = n / 100;
        d = n /10 - c * 10;
        u = n % 10;
        if ((c != u)&&(u != d)&&(d != c))
        {
            cout << n << endl;
        }
    }
    system("PAUSE");
    return 0;
}
