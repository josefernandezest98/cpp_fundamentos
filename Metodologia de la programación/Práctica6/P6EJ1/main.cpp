#include <iostream>
#include <cstdlib>
using namespace std;

void tramo(int);

int main()
{
    int n;
    n = 1;
    while( n <= 39 )
    {
        tramo(n);
        n = n + 2;
    }
    n = 1;
    while( n <= 4 )
    {
       tramo(5);
       n = n + 1;
    }
    tramo(n);
    system("PAUSE");
    return(0);
}
void tramo(int n)
{
    int i;
    i = 1;
    while ( i <= (79-n) / 2 )
    {
        cout<<' ';
        i = i + 1;
    }
    i = 1;
    while ( i <= n )
    {
        cout<<'*';   i = i + 1;
    }
 cout<<endl;
}
