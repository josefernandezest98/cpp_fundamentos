#include <iostream>

using namespace std;

int main()
{
    int *p,*q;

    p=new(int);
    q=new(int);

    if (p!= NULL && q!=NULL)
    {
        *p=5;
        *q=6;
        delete(p);
        p=q;
        delete(q);
    }

    return 0;
}

