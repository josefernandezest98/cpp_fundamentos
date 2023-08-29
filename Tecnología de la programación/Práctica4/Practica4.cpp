#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch(1).hpp"

using namespace std;

// Ejercicio 1. Función recursiva para calcular el factorial de un número.

/*
{Pre: }
{Post: }
*/
int factorial(int n){
    if(n==0)
    {
        return 1;
    }else{
        return (factorial(n-1)*n);
    }
}


// Ejercicio 2. Función recursiva para calcular el cálculo de la potencia de a elevado a n.
/*
{Pre: }
{Post: }
*/
float potencia(float a, int n){
    if(n==0)
    {
        return 1;
    }else{
        if (n>0) return (a*potencia(a,n-1));
        else return (1/a*potencia(a,n+1));
    }
}


// Ejercicio 3.a. Suma las componentes de un vector. Importante recordar que los vectores en
// C++ empiezan en el índice 0 y que por tanto el segundo parámetro de la función no representa
// el tamaño del vector, sino el tamaño del vector menos 1.
/*
{Pre: }
{Post: }
*/
int suma(int v[100],int n){
    if(n==0)
    {
        return v[0];
    }else{
        return (v[n]+suma(v,n-1));
        }
}


// Ejercicio 3.b. Calcula la media de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
float media(int v[100],int n){
    if(n==0)
    {
        return v[0];
    }else{
        return ((media(v,n-1)*n+v[n])/(n+1));
        }
}

// Ejercicio 3.c. Calcula el máximo de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
int maximo(int v[100],int n){
    if(n==0) return v[0];
    else
    {
        if(v[n]>=maximo(v,n-1))
        {
            return(v[n]);
        }
        else
        {
            return(maximo(v,n-1));
        }
    }
}

// Ejercicio 3.d. Calcula el mínimo de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
int minimo(int v[100],int n){
    if(n==0) return v[0];
    else
    {
        if(v[n]<=minimo(v,n-1))
        {
            return(v[n]);
        }
        else
        {
            return(minimo(v,n-1));
        }
    }
}



TEST_CASE( "Calculando factoriales", "[factorial]" ) {
    REQUIRE( factorial(0) == 1 );
    REQUIRE( factorial(1) == 1 );
    REQUIRE( factorial(2) == 2 );
    REQUIRE( factorial(3) == 6 );
    REQUIRE( factorial(10) == 3628800 );
}

TEST_CASE( "Calculando potencias", "[potencia]" ) {
    REQUIRE( potencia(1,0) == 1 );
    REQUIRE( potencia(2,2) == 4 );
    REQUIRE( potencia(3,3) == 27 );
    REQUIRE( potencia(5,0) == 1 );
    REQUIRE( potencia(0,5) == 0 );
    REQUIRE( potencia(2,-4) == 0.0625 );
}

TEST_CASE( "Calculando suma de vectores", "[suma]" ) {
    int v1[] = {5, 15, 20, 25, 30};
    int v2[] = {1};
    int v3[] = {1,2,3,4,5};
    int v4[] = {1,2,3,4,5,5, 15, 20, 25, 30};

    REQUIRE( suma(v1,4) == 95 );
    REQUIRE( suma(v2,0) == 1 );
    REQUIRE( suma(v3,4) == 15 );
    REQUIRE( suma(v4,9) == 110 );
}

TEST_CASE( "Calculando maximo de vectores", "[potencias]" ) {
    int v1[] = {5, 15, 20, 25, 30};
    int v2[] = {1};
    int v3[] = {1,2,3,4,5};
    int v4[] = {1,2,3,4,30,5,5, 15, 20, 25};

    REQUIRE( maximo(v1,4) == 30 );
    REQUIRE( maximo(v2,0) == 1 );
    REQUIRE( maximo(v3,4) == 5 );
    REQUIRE( maximo(v4,9) == 30 );
}

TEST_CASE( "Calculando minimo de vectores", "[minimo]" ) {
    int v1[] = {5, 15, 20, 25, 30};
    int v2[] = {1};
    int v3[] = {1,2,3,4,5};
    int v4[] = {2,3,4,30,5,5, 15, 20, 25,1};

    REQUIRE( minimo(v1,4) == 5 );
    REQUIRE( minimo(v2,0) == 1 );
    REQUIRE( minimo(v3,4) == 1 );
    REQUIRE( minimo(v4,9) == 1 );
}

TEST_CASE( "Calculando media de vectores", "[media]" ) {
    int v1[] = {5, 15, 20, 25, 30};
    int v2[] = {1};
    int v3[] = {1,2,3,4,5};
    int v4[] = {2,3,4,30,5,5, 15, 20, 25,1};

    REQUIRE( media(v1,4) == 19 );
    REQUIRE( media(v2,0) == 1 );
    REQUIRE( media(v3,4) == 3 );
    REQUIRE( media(v4,9) == 11 );
}








