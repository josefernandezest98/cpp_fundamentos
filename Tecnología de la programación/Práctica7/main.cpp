#include <iostream>

using namespace std;


struct nodo
{
    int dato;
    nodo *sig;
};
typedef nodo *lista;

//DECLARACIONES
void anadirNodo (lista &lis,int n);
void crearLista(lista &lis);
void mostrarLista(lista lis);
void liberarLista (lista &lis);
void anadirNodoAlFinal (lista &lis,int n)

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

//Construir un subprograma que dados un entero n y una lista enlazada de nodos lis, añada
//un nodo (con el entero n como dato) como primer nodo de la lista.
void anadirNodo (lista &lis,int n)
{
    nodo *nuevo=new(nodo);

    if (nuevo!=NULL)
    {
        (*nuevo).dato=n;     //dato del puntero nuevo toma el valor de n
        (*nuevo).sig=lis;    //sig del puntero nuevo ahora apunta a lista
         lis=nuevo;           //lista apunta a lo que apunta nuevo(dato)
    }
}

//Construir un subprograma que lea del teclado una secuencia de enteros (terminada en 0) y
//cree una lista enlazada de nodos con los enteros leídos.
void crearLista(lista &lis)
{
    lis=NULL;
    int n;
    cout<<"Introduce una secuancia de enteros terminada en 0."<<endl;
    cin>>n;

    while(n!=0)
    {
        anadirNodo(lis,n);
        cin>>n;
    }
}

//Construir un subprograma que dada una lista enlazada de nodos muestre por pantalla los
//enteros almacenados en la lista.
void mostrarLista(lista lis)
{
    nodo*aux;
    aux=lis;
    while(aux!=NULL)
    {
        cout<<(*aux).dato<<endl;
        aux=(*aux).sig;
    }
}

//Construir un subprograma que libere una lista enlazada de nodos.
void liberarLista (lista &lis)
{
    nodo*aux;
    aux=lis;
    while(aux!=NULL)
        {
            lis=(*aux).sig;
            delete(aux);
            aux=lis;
        }
}

//Construir un subprograma que dados un entero n y una lista enlazada de nodos lis, añada
//un nodo (con el entero n como dato) al final de la lista lis.
void anadirNodoAlFinal (lista &lis,int n)
{
    nodo *aux;
    aux=lista;

    nodo *nuevo=new(nodo);
    if (nuevo!=NULL)
    {
        (*nuevo).dato=n;
        (*nuevo).sig=NULL;

        if (lis!=NULL)       //si la lista no apunta al final
        {
            while((*aux).sig!=NULL)
                {
                    aux=(*aux).sig;
                }
                (*aux).sig=nuevo;

    }
}


//Construir un programa que lea del teclado una secuencia de enteros terminada en 0,
//calcule la media y muestre por pantalla, en el mismo orden en el que se han introducido,
//cada dato de la secuencia junto a su diferencia con la media.
void mostrarDiffMedia (lista &lis)
{
    crearLista(lis);

    nodo *aux;
    float media = .0;
    int suma = 0;
    int contador = 0;

    aux = lista;

    while (aux != NULL)
    {
        suma = suma + (*aux).dato;    //aumento la suma con el contenido de lista
        contador++;
        aux = (*lista).sig;           // paso al siguiente dato
    }
    media = media/contador;
    cout << media;

    if ((*aux).dato > media)
    {
        cout << (*aux).dato << "Supera la media en: " << (*aux).dato - media << endl;
    //muestra el elemento de la lista y por cuanto supera la media
    }
    if ((*aux).dato < media)
    {
        cout << (*aux).dato << "Esta por debajo de la media en: " << media - (*aux).dato << endl;
    //muestra el elemento de la lista y cuanto le falta para llegar a la media
    }

}


//Construir un subprograma que dada una lista enlazada de nodos ordenada crecientemente,
//inserte un nuevo nodo en la lista de forma que ésta quede ordenada crecientemente.
/*void insertarOrdenado(lista &lis)
{
    nodo *aux;
    nodo *nuevo = new(nodo);

    aux = lista;

    int n;
    cout << "Introduce una secuancia de enteros terminada en 0(empezamos por el final)."<<endl;
    cin >> n;

    (*nuevo).dato = n;

    while ((*aux).dato < n) {      //mientras que el numero del nodo sea menor que el de secuencia,avanzo
        aux = (*aux).sig;
    }
    //llego a donde quiero añadir el dato
    (*aux).sig = (*nuevo).sig;
    (*aux).dato = (*nuevo).dato;
    (*aux).sig = nuevo;

    while((*aux).sig != NULL) {      //escribe el resto hasta que sea nulo
        aux = (*aux).sig;
    }
}
*/



