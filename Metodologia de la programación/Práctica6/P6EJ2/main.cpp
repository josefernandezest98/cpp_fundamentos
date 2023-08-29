#include <iostream>
#include <cstdlib>
using namespace std;

int suma_divisores( int &);

int main()
{
    int num;
    num = 1;
    while(num <= 1000)
    {
        if (num == suma_divisores(num))
        {
            cout << num << " es numero perfecto. ";
        }
        num = num + 1;
    }
    system("PAUSE");
    return 0;
}
int suma_divisores (int & n )
{
    int i, suma;
    suma = 0;
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            suma = suma + i;
        }
        i = i + 1;
    }
    return (suma);
}
