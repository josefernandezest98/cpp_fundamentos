#include <iostream>

using namespace std;

void intercambiar2(float *p,float *q);

int main()
{
    float *p,*q;
    float x,y;

    cout<<"Introduce dos reales"<<endl;
    cin>>x;
    cin>>y;

    p=&x;
    q=&y;

    intercambiar2(p,q);
    cout<<x<<endl;
    cout<<y<<endl;
}

void intercambiar2(float *p,float *q)
{
    float aux;

    aux=*p;
    *p=*q;
    *q=aux;
}
