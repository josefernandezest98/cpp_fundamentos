#include "TADCoordenadas.h"

using namespace std;

struct circunferencia{
    float r;
    coordenada c;
};

//Crea una circunferencia con centro en c y radio r
circunferencia crearCircun(float a,coordenada c);

//Devuelve el radio de la circunferencia
float radio(circunferencia c);

//Devuelve el centro de la circunferencia
coordenada centro(circunferencia c);
