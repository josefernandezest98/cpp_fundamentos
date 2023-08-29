#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

// Declaraci�n de funciones
void crearVector(int v[], int );
void escribirVector(int v[], int );
void permutar(int & ,int & );

void insercionDirecta(int v[], int );
void intercambioDirecta(int v[], int );
void seleccionDirecta(int v[], int );
void hundir(int v[], int , int );
void heapSort(int v[], int );


int main(){
    int opcion;
    // Para poder trabajar con vectores suficientemente grandes,
    // es necesario hacerlo con vectores din�micos. Por lo tanto
    // en lugar de utilizar int v[100], utilizamos la siguiente
    // instrucci�n para declarar el vector.
    int *v;
    int n;
    clock_t t1, t2;

    do{
    cout << "Selecciona un metodo de ordenacion: " << endl;
    cout << "1. Seleccion directa. " << endl;
    cout << "2. Insercion directa. " << endl;
    cout << "3. Burbuja. " << endl;
    cout << "4. HeapSort. " << endl;
    cout << "9. Salida. " << endl;
    cout << "Opcion: ";
    cin >> opcion;



    if(opcion == 9){
        return 0;
    }

    cout << "Introduce la dimensi�n del vector: ";
    cin >> n;
    // La siguiente instrucci�n nos construye el vector con la
    // dimensi�n le�da por teclado.
    v = new(int[n+1]);
    crearVector(v, n);
    //cout <<endl<< "Datos sin ordenar: ";
    //escribirVector(v, n);


    switch(opcion){
    case 1:{
        t1=clock();
        seleccionDirecta(v, n);
        t2=clock();
        cout<<double(t2-t1)/CLOCKS_PER_SEC<<endl;
        }
        break;
    case 2:{
        t1=clock();
        insercionDirecta(v, n);
        t2=clock();
        cout<<double(t2-t1)/CLOCKS_PER_SEC<<endl;
        }
        break;
    case 3:{
        t1=clock();
        intercambioDirecta(v, n);
        t2=clock();
        cout<<double(t2-t1)/CLOCKS_PER_SEC<<endl;
        }
        break;
    case 4:{
        t1=clock();
        heapSort(v, n);
        t2=clock();
        cout<<double(t2-t1)/CLOCKS_PER_SEC<<endl;
        }
        break;

    }

    //cout <<endl<< "Datos ordenados: ";
    //escribirVector(v, n);

    }while(opcion!=9);

    system("pause");
    return 0;
}


// Funci�n que inicializa el vector con n�meros generados aleatoriamente.
// Se utilizan las funciones de <stdlib.h>:
// int rand(void) que genera n�meros enteros entre 0 y RAND_MAX (32767)
// void srand(unsigned int seed) para que al cambiar la semilla la
// secuencia sea distinta en cada ejecuci�n. Si deseamos aleatorizar
// sin tener que sembrar un n�mero cada vez, podemos utilizar la
// instrucci�n srand(time(NULL)).
void crearVector(int v[], int n){
    long i;
    srand(time(NULL));
    for(i = 1; i <= n; i++){
        //
        v[i] = rand()%100;
    }
}

// Funci�n que muestra por pantalla el contenido de un vector
void escribirVector(int v[], int n){
    int i;
    cout << endl << "( ";
    for(i = 1; i <= n; i++)
    cout << v[i] << " ";
    cout << ")" << endl;
}



// M�todo de selecci�n directo
void seleccionDirecta(int v[], int n){
    int i, j, indmenor;  // i es el elemento a fijar
    for(i = 1; i <= n-1; i++){
          indmenor = i;         // Se busca el menor
          for(j = i+1; j <= n; j++){
                if(v[indmenor] > v[j]){
                        indmenor=j;
                }
          }
       permutar(v[i],v[indmenor]);
    }
}

// M�todo de inserci�n directa
// La componente v[0] es la utilizada para intercambiar
// los elementos del vector que tendr� n+1 componentes
void insercionDirecta(int v[], int n){
    int i, j,aux;  // i es el elemento a insertar;
     // j el punto a insertar
    for(i = 2; i <= n; i++){
          aux = v[i];       // Inserci�n del elemento i-�simo
          j = i;                 // Iniciar centinela
           while((v[j-1] > aux)&&(j>1)){  // Buscar punto de insercci�n
                  v[j] = v[j-1];
                  j--;

           }
           v[j]=aux;
    }
}

// M�todo de intercambio directo
void intercambioDirecta(int v[], int n){
    int i, j,aux;    // i es el elemento a fijar
    for(i = 1; i <= n-1; i++){
          for(j = n; i+1 <= j; j--){
                if(v[j-1] > v[j]){
                    permutar(v[j-1],v[j]);
                }
          }
    }
}

// Funci�n que intercambia el contenido de dos variables
void permutar(int& a,int& b){
    int aux = a;
    a = b;
    b = aux;
}

// M�todo heapsort
void hundir(int v[], int n, int i){
    int j;
    do{
       j = i;        // Busca el hijo menor del nodo i
       if((2*j <= n) && (v[2*j] > v[i]))
               i = 2*j;
       if((2*j < n) && (v[2*j+1] > v[i]))
               i = 2*j+1;
       permutar(v[i], v[j]);
    }while(i != j);
}

void heapSort(int v[], int n){
    int i;
    for(i = n/2; 1 <= i; i--)
        hundir(v, n, i);
    for(i = n; 2 <= i; i--){
        permutar(v[1], v[i]);
        hundir(v, i-1, 1);
    }
}
