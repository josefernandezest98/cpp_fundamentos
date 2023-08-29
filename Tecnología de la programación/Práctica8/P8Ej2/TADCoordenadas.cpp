#include "TADCoordenadas.h"

coordenada crear (float a, float b){
    coordenada c;
    c.x=a;
    c.y=b;
    return c;
    }


float abscisa (coordenada c){
    return (c.x);
}


float ordenada (coordenada c){
    return (c.y);
}


float distanciaO(coordenada c){
    float d;
    d=sqrt(c.x*c.x+c.y*c.y);
    return d;
}
