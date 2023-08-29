#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Circunferencia.h"

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



TEST_CASE("Comprobando constructores y método getRadio", "[Constructores]" ) {
    Circunferencia c1;
    REQUIRE( iguales(c1.getRadio(),0) );

    Circunferencia c2 (5.0);
    REQUIRE( iguales(c2.getRadio(), 5.0) );

    Circunferencia * pc1 = new Circunferencia();
    REQUIRE( iguales(pc1->getRadio() , 0) );

    Circunferencia * pc2 = new Circunferencia(5.0);
    REQUIRE( iguales(pc2->getRadio() , 5.0) );
}


TEST_CASE("Comprobando métodos getRadio y setRadio", "[Radio]" ) {
    Circunferencia c1;
    c1.setRadio(10.0);
    REQUIRE(iguales(c1.getRadio() , 10.0));

    Circunferencia * pc2 = new Circunferencia(5.0);
    pc2->setRadio(5.3);
    REQUIRE( iguales(pc2->getRadio() , 5.3) );
}

TEST_CASE("Comprobando métodos getDiametro y setDiametro", "[Diámetro]" ) {
    Circunferencia c2 (5.0);
    REQUIRE( iguales(c2.getDiametro() , 10.0) );
    c2.setDiametro(15.0);
    REQUIRE( iguales(c2.getDiametro() , 15.0 ));
    REQUIRE( iguales(c2.getRadio() , 7.5) );

    Circunferencia * pc2 = new Circunferencia(5.0);
    pc2->setRadio(0.2);
    REQUIRE( iguales(pc2->getDiametro() , 0.4) );
}


TEST_CASE("Comprobando métodos getLongitud y setLongitud", "[Longitud]" ) {
    Circunferencia c2 (5.0);
    REQUIRE( iguales(c2.getLongitud() , 31.416));


    c2.setLongitud(3.1416);
    REQUIRE( iguales(c2.getRadio() , 0.5));
    REQUIRE( iguales( c2.getLongitud() , 3.1416));


    Circunferencia * pc1 = new Circunferencia();
    REQUIRE( iguales(pc1->getLongitud() , 0.0) );

    pc1->setLongitud(0.62832);
    REQUIRE( iguales(pc1->getRadio() , 0.1));
    REQUIRE( iguales(pc1->getLongitud(), 0.62832));

}


TEST_CASE("Comprobando métodos getArea y setArea", "[Area]" ) {
    Circunferencia c2 (5.0);
    REQUIRE( iguales(c2.getArea() , 78.54));


    c2.setArea(3.1416);
    REQUIRE( iguales(c2.getRadio() , 1.0));
    REQUIRE( iguales(c2.getArea() , 3.1416));


    Circunferencia * pc1 = new Circunferencia();
    REQUIRE( pc1->getArea() == 0.0 );
    pc1->setArea(0.125664);
    REQUIRE( iguales(pc1->getRadio() , 0.2));
    REQUIRE( iguales(pc1->getArea() , 0.125664));

}
