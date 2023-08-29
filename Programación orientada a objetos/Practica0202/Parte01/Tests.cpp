#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Circunferencia.h"
#include "Punto.h"
#include "Circunferencia2D.h"

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



TEST_CASE("Comprobando constructores y métodos getX y getY", "[Constructores-GetX-GetY]" )
{
    Punto p;
    REQUIRE( iguales( p.getX(), 0.0));
    REQUIRE( iguales( p.getY(), 0.0));

    Punto * p1 = new Punto(5.0,5.0);
    REQUIRE( iguales( p1->getX(), 5.0));
    REQUIRE( iguales( p1->getY(), 5.0));
}


TEST_CASE("Comprobando métodos setX y getX", "[Get-Set-X]" )
{
    Punto * p = new Punto(7.5,7.2);
    p->setX(3.2);
    REQUIRE( iguales( p->getX(), 3.2));
    REQUIRE( iguales( p->getY(), 7.2));
}


TEST_CASE("Comprobando métodos setY y getY", "[Get-Set-Y]" )
{
    Punto * p = new Punto(7.5,7.2);
    p->setY(3.5);
    REQUIRE( iguales( p->getX(), 7.5));
    REQUIRE( iguales( p->getY(), 3.5));
}

TEST_CASE("Comprobando método getCoordRadial", "[Get-CoordRadial]" )
{
    Punto * p1 = new Punto(7.5,3.2);
    REQUIRE( iguales( p1->getCoordRadial(), 8.15414));


    Punto * p2 = new Punto(-3.4,0);
    REQUIRE( iguales( p2->getCoordRadial(), 3.4));


    Punto * p3 = new Punto(-3.4,3.2);
    REQUIRE( iguales( p3->getCoordRadial(), 4.669047));

    Punto * p4 = new Punto(-5.77,-4.5);
    REQUIRE( iguales( p4->getCoordRadial(), 7.317301));

    Punto * p5 = new Punto(0,6.3);
    REQUIRE( iguales( p5->getCoordRadial(), 6.3));

    Punto * p6 = new Punto(0,-9.8);
    REQUIRE( iguales( p6->getCoordRadial(), 9.8));

    Punto * p7 = new Punto(0,0);
    REQUIRE( iguales( p7->getCoordRadial(), 0.0));
}


TEST_CASE("Comprobando método getCoordAngular", "[Get-CoordAngular]" )
{
    Punto * p1 = new Punto(7.5,3.2);
    REQUIRE( iguales( p1->getCoordAngular(), 0.40328));


    Punto * p2 = new Punto(-3.4,0);
    REQUIRE( iguales( p2->getCoordAngular(), 3.14159));


    Punto * p3 = new Punto(-3.4,3.2);
    REQUIRE( iguales( p3->getCoordAngular(), 2.38649));

    Punto * p4 = new Punto(-5.77,-4.5);
    REQUIRE( iguales( p4->getCoordAngular(), -2.47923));

    Punto * p5 = new Punto(0,6.3);
    REQUIRE( iguales( p5->getCoordAngular(), 1.5708));

    Punto * p6 = new Punto(0,-9.8);
    REQUIRE( iguales( p6->getCoordAngular(), -1.5708));

    Punto * p7 = new Punto(0,0);
    REQUIRE( iguales( p7->getCoordAngular(), 0.0));
}


TEST_CASE("Comprobando método setCoordRadial", "[Set-CoordRadial]" )
{
    Punto * p1 = new Punto(7.5,3.2);
    p1->setCoordRadial(4.2);
    REQUIRE( iguales( p1->getCoordRadial(), 4.2));
    REQUIRE( iguales( p1->getX(), 3.86307));
    REQUIRE( iguales( p1->getY(), 1.64824));


    Punto * p2 = new Punto(-3.4,-2);
    p2->setCoordRadial(50.9);
    REQUIRE( iguales( p2->getCoordRadial(), 50.9));
    REQUIRE( iguales( p2->getX(), -43.87245));
    REQUIRE( iguales( p2->getY(), -25.80732));
}

TEST_CASE("Comprobando método setCoordAngular", "[Set-CoordAngular]" )
{
    Punto * p1 = new Punto(7.5,3.2);
    p1->setCoordAngular(0.78538);
    REQUIRE( iguales( p1->getCoordAngular(), 0.78538));
    REQUIRE( iguales( p1->getX(), 5.76595));
    REQUIRE( iguales( p1->getY(), 5.76574));

    Punto * p2 = new Punto(-3.4,-2);
    p2->setCoordAngular(-0.52358);
    REQUIRE( iguales( p2->getCoordAngular(), -0.52358));
    REQUIRE( iguales( p2->getX(),3.41618));
    REQUIRE( iguales( p2->getY(), -1.97224));

}

TEST_CASE("Comprobando método sumar", "[Sumar]" )
{
    Punto * p1 = new Punto(7.5,3.2);
    Punto * p2 = new Punto();
    p1->sumarCoordenadas(p2);
    REQUIRE( iguales( p1->getX(), 7.5));
    REQUIRE( iguales( p1->getY(), 3.2));


    Punto * p3 = new Punto (2.4,-4.2);
    p1->sumarCoordenadas(p3);
    REQUIRE( iguales( p1->getX(), 9.9));
    REQUIRE( iguales( p1->getY(), -1.0));


    Punto * p4 = new Punto (-2.9,2.0);
    p1->sumarCoordenadas(p4);
    REQUIRE( iguales( p1->getX(), 7.0));
    REQUIRE( iguales( p1->getY(), 1.0));
}

TEST_CASE("Comprobando método norma", "[Norma]" )
{
    Punto * p1 = new Punto(7.5,3.2);
    REQUIRE( iguales( p1->norma(), 8.1541));

    Punto * p2 = new Punto();
    REQUIRE(iguales(p2->norma(),0));

    Punto * p3 = new Punto(-1.0,0);
    REQUIRE(iguales( p3->norma(),1));
}




TEST_CASE("testIguales", "[Iguales]" )
{

	Punto * p1 = new Punto(7.5,3.2);
		Punto * p2 = new Punto(1,1);
		REQUIRE(p1->equals(p2)==false);
		
		
		Punto * p3 = new Punto(7.5,3.2);
		REQUIRE(p1->equals(p3)==true);
		
		
		p1->setCoordAngular(3.14);
		p2->setCoordAngular(3.14);
		p1->setCoordRadial(10.5);
		p2->setCoordRadial(10.5);
		REQUIRE(p1->equals(p2)==true);

		p1->setX(15.3);
		p2->setX(15.3);
		p1->setY(-5.8);
		p2->setY(-5.8);
		REQUIRE(p1->equals(p2)==true);
	

}



TEST_CASE("Comprobando constructores y método getRadio Circunferencia2D", "[Constructores]" ) {
    Circunferencia2D c1;
    REQUIRE( iguales(c1.getRadio(), 0.0) );
    REQUIRE( iguales(c1.getCentro()->getX(), 0.0) );
    REQUIRE( iguales(c1.getCentro()->getY(), 0.0) );


    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D c2 (5.0,p);
    REQUIRE( iguales(c2.getRadio(), 5.0) );
    REQUIRE( iguales(c2.getCentro()->getX(), 3.2) );
    REQUIRE( iguales(c2.getCentro()->getY(), 3.2) );

}


TEST_CASE("Comprobando métodos getRadio y setRadio Circunferencia2D", "[Radio]" ) {
    Circunferencia2D c1;
    c1.setRadio(10.0);
    REQUIRE(iguales(c1.getRadio() , 10.0));

    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D * pc2 = new Circunferencia2D(5.0,p);
    pc2->setRadio(5.3);
    REQUIRE( iguales(pc2->getRadio() , 5.3) );
}

TEST_CASE("Comprobando métodos getDiametro y setDiametro Circunferencia2D", "[Diámetro]" ) {
    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D c2 (5.0,p);

    REQUIRE( iguales(c2.getDiametro() , 10.0) );
    c2.setDiametro(15.0);
    REQUIRE( iguales(c2.getDiametro() , 15.0) );
    REQUIRE( iguales(c2.getRadio() , 7.5 ));

}


TEST_CASE("Comprobando métodos getLongitud y setLongitud Circunferencia2D", "[Longitud]" ) {
    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D c2 (5.0,p);
    REQUIRE(iguales( c2.getLongitud() , 31.416) );
    c2.setLongitud(3.1416);
    REQUIRE(iguales(c2.getRadio() , 0.5  ));
    REQUIRE(iguales(c2.getLongitud() , 3.1416));



}


TEST_CASE("Comprobando métodos getArea y setArea Circunferencia2D", "[Area]" ) {
    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D c2 (5.0,p);
    REQUIRE( iguales(c2.getArea() , 78.54));


    c2.setArea(3.1416);
    REQUIRE( iguales(c2.getRadio() , 1.0));
    REQUIRE( iguales(c2.getArea() , 3.1416));


    Circunferencia2D * pc1 = new Circunferencia2D();
    REQUIRE( pc1->getArea() == 0.0 );
    pc1->setArea(0.125664);
    REQUIRE( iguales(pc1->getRadio() , 0.2));
    REQUIRE( iguales(pc1->getArea() , 0.125664));

}


TEST_CASE("Comprobando métodos getCentro y setCentro Circunferencia2D", "[Centro]" ) {
    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D c2 (5.0,p);
    REQUIRE( iguales(c2.getCentro()->getX() , 3.2));
    REQUIRE( iguales(c2.getCentro()->getY() , 3.2));

    Punto * p1 = new Punto  (4.5,5.6);
    c2.setCentro(p1);
    REQUIRE( iguales(c2.getCentro()->getX() , 4.5));
    REQUIRE( iguales(c2.getCentro()->getY() , 5.6));

}

TEST_CASE("Comprobando método sumarCoordenadas Circunferencia2D", "[sumarCoordenadas]" ) {
    Punto * p = new Punto (3.2,3.2);
    Circunferencia2D c2 (5.0,p);
    Punto * p1 = new Punto (4.5,5.6);
    c2.sumarCoordenadas(p1);
    REQUIRE( iguales(c2.getCentro()->getX() , 7.7));
    REQUIRE( iguales(c2.getCentro()->getY() , 8.8));

}
