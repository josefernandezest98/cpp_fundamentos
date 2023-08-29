#include<iostream>
#include "pila.h"

void crear (pila &p);
void mostrar(pila p);
int numerosPila (pila p);
void invertirPila (pila p,pila &q);
void copiarPila (pila p,pila &q);
void copiar (pila p,pila &q);
bool pilasIguales(pila p,pila q);
bool capicua(int n);
void enteroAPila (int n,pila &p);



int main()
{
    pila p,q,r;
    crear(p);
    mostrar(p);
    cout <<"El numero de elementos de la pila es:"<< numerosPila(p)<<endl;
    invertirPila(p,q);
    mostrar(q);

    copiarPila(p,r);
    mostrar(r);

    crear(q);
    cout<<pilasIguales(p,q)<<endl;


    int n;
    cout<<"Introduce un entero para saber si es capicua"<<endl;
    cin>>n;
    cout<<capicua(n);

}

void crear (pila &p)
{
    iniciarPila(p);
    int n;
    cout<<"Introduce una secuencia de enteros terminada en 0"<<endl;
    cin>>n;

    while(n!=0)
    {
        apilar(p,n);
        cin>> n;
    }
}


void mostrar(pila p)
{
    pila aux;
    iniciarPila(aux);

    while (!pilaVacia(p))
    {
        cout<<cima(p)<<endl;
        apilar(aux,cima(p));
        desapilar(p);
    }

    while (!pilaVacia(aux))
    {
        apilar(p,cima(aux));
        desapilar(aux);
    }
}


int numerosPila (pila p)
{
    int i=0;
    pila aux;
    iniciarPila(aux);

    while(!pilaVacia(p))
    {
        apilar(aux,cima(p));
        desapilar(p);
        i=i+1;
    }
    while (!pilaVacia(aux))
    {
        apilar(p,cima(aux));
        desapilar(aux);
    }
    return(i);
}


void invertirPila (pila p,pila &q)
{
    iniciarPila(q);

    while(!pilaVacia(p))
    {
        apilar(q,cima(p));
        desapilar(p);
    }
}

void copiarPila (pila p,pila &q)
{
    pila aux;
    iniciarPila(aux);
    iniciarPila(q);

    while(!pilaVacia(p))
    {
        apilar(aux,cima(p));
        desapilar(p);
    }//cuando sales de este while p se queda vacia

    invertirPila(aux,q);
}

void copiar (pila p,pila &q)
{
    pila aux;
    iniciarPila(aux);
    iniciarPila(q);

    while(!pilaVacia(p))
    {
        apilar(aux,cima(p));
        apilar(q,cima(p));
        desapilar(p);
    }

    invertirPila(aux,q);
}

bool pilasIguales(pila p,pila q)
{
    bool booleano=true;

    if (numerosPila(p)!=numerosPila(q))
    {
        booleano=false;
    }

    while(!pilaVacia(p)&&!pilaVacia(q)&&booleano)
    {
        if(cima(p)!=cima(q))
        {
            booleano=false;

        }else{
                desapilar(p);
                desapilar(q);
            }
    }

    return (booleano);
}

bool capicua(int n)
{
    pila p,q,i;
    iniciarPila(p);
    enteroAPila(n,p);

    copiar(p,q);
    invertirPila(q,i);

    return(pilasIguales(p,i));
}

void enteroAPila (int n,pila &p)
{
    int r;


    while(n!=0)
    {
        r=n%10;
        n=n/10;
        apilar(p,r);
    }
}
