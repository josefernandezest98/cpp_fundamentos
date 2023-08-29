#ifndef RACIONAL_H_INCLUDED
#define RACIONAL_H_INCLUDED

struct racional
{
    int numerador;
    int denominador;
};

void crear (int a, int b,racional &r);
//{PRE: b distinto de O}
//{POST: crea el racional r con numerador a y denominador b}
int numerador(racional r);
//{PRE: }
//{POST: devuelve el numerador del racional r}
int denominador(racional r);
//{PRE: }
//{POST: devuelve el denominador del racional r}
void irreducible(racional r,racional &rr);
//{PRE: }
//{POST: crea rr como el racional irreducible}

#endif // RACIONAL_H_INCLUDED
