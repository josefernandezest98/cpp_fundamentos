#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Punto.h"
using namespace std;

const static double EPSILON = 0.0001;

bool iguales(double d1,double d2){
    if(abs(d1-d2)<EPSILON){
        return true;
    }else{
        cout<<"Valor esperado: "<< d2 << ", valor obtenido: "<< d1 <<endl;
        return false;
    }
}




TEST_CASE("Comprobando constructores y métodos getX y getY", "[Constructores-GetX-GetY]" ) {
    Punto p;
    REQUIRE( iguales( p.getX() , 0.0));
    REQUIRE( iguales( p.getY() , 0.0));

    Punto * p1 = new Punto(5.0,5.0);
    REQUIRE( iguales( p1->getX() , 5.0));
    REQUIRE( iguales( p1->getY() , 5.0));
}


TEST_CASE("Comprobando métodos setX y getX", "[Get-Set-X]" ) {
    Punto * p = new Punto(7.5,7.2);
    p->setX(3.2);
    REQUIRE( iguales( p->getX() , 3.2));
    REQUIRE( iguales( p->getY() , 7.2));
}


TEST_CASE("Comprobando métodos setY y getY", "[Get-Set-Y]" ) {
    Punto * p = new Punto(7.5,7.2);
    p->setY(3.5);
    REQUIRE( iguales( p->getX() , 7.5));
    REQUIRE( iguales( p->getY() , 3.5));
}

TEST_CASE("Comprobando método getCoordRadial", "[Get-CoordRadial]" ) {
    Punto * p1 = new Punto(7.5,3.2);
    REQUIRE( iguales( p1->getCoordRadial() , 8.15414));


    Punto * p2 = new Punto(-3.4,0);
    REQUIRE( iguales( p2->getCoordRadial() , 3.4));


    Punto * p3 = new Punto(-3.4,3.2);
    REQUIRE( iguales( p3->getCoordRadial() , 4.669047));

    Punto * p4 = new Punto(-5.77,-4.5);
    REQUIRE( iguales( p4->getCoordRadial() , 7.317301));

    Punto * p5 = new Punto(0,6.3);
    REQUIRE( iguales( p5->getCoordRadial() , 6.3));

    Punto * p6 = new Punto(0,-9.8);
    REQUIRE( iguales( p6->getCoordRadial() , 9.8));

    Punto * p7 = new Punto(0,0);
    REQUIRE( iguales( p7->getCoordRadial() , 0.0));
}


TEST_CASE("Comprobando método getCoordAngular", "[Get-CoordAngular]" ) {
    Punto * p1 = new Punto(7.5,3.2);
    REQUIRE( iguales( p1->getCoordAngular() , 0.40328));


    Punto * p2 = new Punto(-3.4,0);
    REQUIRE( iguales( p2->getCoordAngular() , 3.14159));


    Punto * p3 = new Punto(-3.4,3.2);
    REQUIRE( iguales( p3->getCoordAngular() , 2.38649));

    Punto * p4 = new Punto(-5.77,-4.5);
    REQUIRE( iguales( p4->getCoordAngular() , -2.47923));

    Punto * p5 = new Punto(0,6.3);
    REQUIRE( iguales( p5->getCoordAngular() , 1.5708));

    Punto * p6 = new Punto(0,-9.8);
    REQUIRE( iguales( p6->getCoordAngular() , -1.5708));

    Punto * p7 = new Punto(0,0);
    REQUIRE( iguales( p7->getCoordAngular() , 0.0));
}


TEST_CASE("Comprobando método setCoordRadial", "[Set-CoordRadial]" ) {
    Punto * p1 = new Punto(7.5,3.2);
    p1->setCoordRadial(4.2);
    REQUIRE( iguales( p1->getCoordRadial() , 4.2));
    REQUIRE( iguales( p1->getX() , 3.86307));
    REQUIRE( iguales( p1->getY() , 1.64824));


    Punto * p2 = new Punto(-3.4,-2);
    p2->setCoordRadial(50.9);
    REQUIRE( iguales( p2->getCoordRadial() , 50.9));
    REQUIRE( iguales( p2->getX() , -43.87245));
    REQUIRE( iguales( p2->getY() , -25.80732));
}

TEST_CASE("Comprobando método setCoordAngular", "[Set-CoordAngular]" ) {
    Punto * p1 = new Punto(7.5,3.2);
    p1->setCoordAngular(0.78538);
    REQUIRE( iguales( p1->getCoordAngular() , 0.78538));
    REQUIRE( iguales( p1->getX() , 5.76595));
    REQUIRE( iguales( p1->getY() , 5.76574));

    Punto * p2 = new Punto(-3.4,-2);
    p2->setCoordAngular(-0.52358);
    REQUIRE( iguales( p2->getCoordAngular() , -0.52358));
    REQUIRE( iguales( p2->getX() ,3.41618));
    REQUIRE( iguales( p2->getY() , -1.97224));

}

TEST_CASE("Comprobando método sumar", "[Sumar]" ) {
    Punto * p1 = new Punto(7.5,3.2);
    Punto * p2 = new Punto();
    p1->sumarCoordenadas(p2);
    REQUIRE( iguales( p1->getX() , 7.5));
    REQUIRE( iguales( p1->getY() , 3.2));


    Punto * p3 = new Punto (2.4,-4.2);
    p1->sumarCoordenadas(p3);
    REQUIRE( iguales( p1->getX() , 9.9));
    REQUIRE( iguales( p1->getY() , -1.0));


    Punto * p4 = new Punto (-2.9,2.0);
    p1->sumarCoordenadas(p4);
    REQUIRE( iguales( p1->getX() , 7.0));
    REQUIRE( iguales( p1->getY() , 1.0));
}
