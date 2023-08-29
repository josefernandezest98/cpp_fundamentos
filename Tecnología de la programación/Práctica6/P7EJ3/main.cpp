//Este programa te calcula el resto de dividir x entre y (congruencias).

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int *p,*q;

    p=&x;
    q=&y;

    cout << "Introduzca dos enteros positivos" << endl;
    cin>>*p;
    cin>>*q;

    while (*p>=*q)
    {
        *p=*p-*q;
    }
    cout << "El resultado es " << x <<endl;

    return 0;
}

