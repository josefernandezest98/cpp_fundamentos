#include <iostream>
#include "racional.h"
using namespace std;

void leerRacional(racional &r);
void mostrarRacional(racional r);
racional sumaRacionales(racional r1,racional r2);
void multiplicarRacionales(racional r1,racional r2,racional &r3);
bool dosIguales (racional r1,racional r2);

int main()
{
    racional r1,r2,r3;
    leerRacional(r1);
    leerRacional(r2);
    cout<<"La suma es:"<<endl;
    mostrarRacional(sumaRacionales(r1,r2));
    multiplicarRacionales(r1,r2,r3);
    cout<<"La multiplicacion es:"<<endl;
    mostrarRacional(r3);
    cout<<"Son iguales:"<<endl;
    cout<<dosIguales (r1,r2);
    return 0;
}


void leerRacional(racional &r)
{
    int num,den;

    cout<<"Introduce el numerador: "<<endl;
    cin>>num;
    cout<<"Introduce el denominador: "<<endl;
    cin>>den;

    crear(num,den,r);
}


void mostrarRacional(racional r)
{
    cout<<numerador(r)<<"/"<<denominador(r)<<endl;
}


racional sumaRacionales(racional r1,racional r2)
{
    racional r3;
    int num,den;

    num = (numerador(r1)*denominador(r2))+(denominador(r1)*numerador(r2));
    den = (denominador(r1)*denominador(r2));

    crear(num,den,r3);
    irreducible(r3,r3);

    return(r3);
}


void multiplicarRacionales(racional r1,racional r2,racional &r3)
{
    int num,den;

    num = (numerador(r1)*numerador(r2));
    den = (denominador(r1)*denominador(r2));

    crear(num,den,r3);
    irreducible(r3,r3);
}


bool dosIguales (racional r1,racional r2)
{
    irreducible(r1,r1);
    irreducible(r2,r2);

    if((numerador(r1)==numerador(r2))&&(denominador(r1)==denominador(r2)))
    {
        return(true);
    }else{
            return(false);
        }
}


void sumaSecuenciaRacionales()
{
    racional suma; //variable en la que guardas el resultado
    crear(0,1,suma);  //la variable suma la inicializas en el 0/1
    racional r;    //variable en la que te guardas cada racional
    leerRacional(r);

    while ((numerador(r)!=0)&&(denominador(r)!=1))
    {
        suma=sumaRacionales(suma,r);
        leerRacional(r); //leer el siguiente
    }
    irreducible(suma,suma);
    mostrarRacional(suma);
}
