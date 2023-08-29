#include "TADCircunferencia.h"

circunferencia crearCircun(float a,coordenada co){
    circunferencia cir;
    cir.c=co;
    cir.r=a;
    return cir;
}


float radio(circunferencia c){
    return c.r;
}


coordenada centro(circunferencia c){
return c.c;
}
