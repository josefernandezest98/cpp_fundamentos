#include <iostream>
#include "TADCircunferencia.h"

using namespace std;

coordenada leerCoor();
circunferencia leerCircun();
bool concentricas (circunferencia a,circunferencia b);
float distancia (coordenada a,coordenada b);
bool dentro (coordenada coor,circunferencia circ);



int main()
{
    circunferencia a;
    coordenada c=leerCoor();
    a=leerCircun();

    if(dentro(c,a)==true){
    cout << "si";
    }
    else{
        cout << "no";
    }
    return 0;
}

coordenada leerCoor(){

    coordenada c;
    cout<<"Introduzca la coordenada x: "<<endl;
    cin>>c.x;
    cout<<"Introduzca la coordenada y: "<<endl;
    cin>>c.y;
    return c;
}

circunferencia leerCircun(){
    circunferencia c;
    coordenada coor;
    float r;
    cout <<"Introduce el radio: "<<endl;
    cin >> r;
    cout <<"Introduzca el centro: "<<endl;
    coor=leerCoor();
    c.r=r;
    c.c=coor;
    return c;



}
bool concentricas (circunferencia a,circunferencia b){
    if((a.c.x==b.c.x)&&(a.c.y==b.c.y)){
        return true;
    }
    else{
        return false;
    }
}

float distancia (coordenada a,coordenada b){
    float d;
    d=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return d;

}

bool dentro (coordenada coor,circunferencia circ){
    if(distancia(circ.c,coor)>circ.r){


        return false;
    }
    else {
        return true;
    }
}
