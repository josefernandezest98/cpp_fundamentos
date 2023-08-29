#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

struct coordenada{
    float x,y;
};

//Crea el punto de coordenadas a,b (x,y)
coordenada crear (float a, float b);

//Devuelve la coordenada x de un punto
float abscisa (coordenada c);

//Devuelve la coordenada y de un punto
float ordenada (coordenada c);

//Devuelve la distancia del punto al origen de coordenadasd (0,0)
float distanciaO(coordenada c);
