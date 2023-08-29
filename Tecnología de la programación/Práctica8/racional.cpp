#include "racional.h"

void crear (int a, int b,racional &r);
int numerador(racional r);
int denominador(racional r);
void irreducible(racional r,racional &rr);
int mcd (int a,int b);

void crear (int a, int b,racional &r)
{
    r.numerador=a;
    r.denominador=b;
}


int numerador(racional r)
{
    return(r.numerador);
}


int denominador(racional r)
{
    return(r.denominador);
}


void irreducible(racional r,racional &rr)
{
    int m;
    m = mcd(r.numerador,r.denominador);
    rr.numerador = r.numerador/m;
    rr.denominador = r.denominador/m;
}


int mcd (int a,int b)
{
     if(b==0)
    {
       return(a);
    }else{
            return mcd(b,a%b);
         }
}
