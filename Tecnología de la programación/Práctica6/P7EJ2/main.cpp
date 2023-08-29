#include <iostream>

using namespace std;

int main()
{

    //EJERCICIO 1: mal
    float x=5;
    int *p;
    int *q;

    q=&x;
    p=q;
    cout<<*p<<endl;

    //EJERCICIO 2: mal
    int x,y;
    int *p;
    int *q;

    p=&x;
    *p=2;
    *q=3;
    cout<<x+y<<endl;

    //EJERCICIO 3: MAL
    int *p;

    *p=2;
    cout<<*p<<endl;

    //EJERCICIO 4:
    int x,y;
    int *p;
    int *q;

    x=3;
    p=&x;
    q=&y;
    *q=7+*p;
    q=p;
    cout<<*q+y<<endl;

    //EJERCICIO 5:
    int x;
    int *p;
    int *q;

    p=&x;
    *p=5;
    q=&p;
    cout<<*q<<endl;

    //EJERCICIO 6:
    int *p;
    int *q;

    p=new(int);
    q=new(int);
    *p=2;
    *q=3;
    q=p;
    delete(p);
    delete(q);

    //EJERCICIO 7:
    int *p;
    int *q;

    p=new(int);
    *p=2;
    q=p;
    delete(q);

}
