#include <iostream>

using namespace std;

int mayorDeCuatro(int x1, int x2, int x3, int x4);

int main()
{

    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    int mayor = mayorDeCuatro(a,b,c,d);
    cout << "El mayor elemento entre "<<a<<", "<<b <<", "<<c<<" y "<<d << " es:" << mayor<<endl;
    return 0;
}

int mayorDeCuatro(int x1, int x2, int x3, int x4)
{
    int mayor1, mayor2, mayor;
    if (x1 > x2)
    {
        mayor1 = x1;
    }
    else
    {
        mayor1 = x2;
    }
    if (x3 > x4)
    {
        mayor2 = x3;
    }
    else
    {
        mayor2 = x4;
    }
    if (mayor1 > mayor2)
    {
        mayor = mayor1;
    }
    else
    {
        mayor = mayor2;
    }
    return mayor;
}
