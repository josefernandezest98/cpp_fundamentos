#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iomanip> // setprecision
#include <sstream> // stringstream
#include <string>
#include "Punto.h"
#include "Polilinea.h"

using namespace std;


const static double EPSILON = 0.0001;

bool iguales(double d1,double d2)
{
    if(abs(d1-d2)<EPSILON)
    {
        return true;
    }
    else
    {
        cout<<"Valor esperado: "<< d2 << ", valor obtenido: "<< d1 <<endl;
        return false;
    }
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




TEST_CASE("ConstructorPolilinea", "[Constructor-Polilinea]" )
{
    Polilinea *pl = new Polilinea("polilinea");
    REQUIRE("polilinea"==pl->getNombre());
    REQUIRE(0==pl->numeroPuntos());

    Polilinea pl2 ("polilinea2");
    REQUIRE("polilinea2"==pl2.getNombre());
    REQUIRE(0== pl2.numeroPuntos());
}





TEST_CASE("testContienePunto", "[ContienePunto]" )
{

    Polilinea * pl = new Polilinea("polilinea");
    Punto * p = new Punto(1.0,1.0);
    REQUIRE(false==pl->contienePunto(p));

    pl->anyadirPunto(p);
    REQUIRE(true==pl->contienePunto(p));


    for(int i=1; i<15; i++)
    {
        p = new Punto(i,i);
        pl->anyadirPunto(p);
        REQUIRE(true==pl->contienePunto(p));
    }

}


TEST_CASE("testAnyadirPunto", "[AnyadirPunto]" )
{

    Polilinea * pl = new Polilinea("polilinea");
    Punto * p = new Punto(0.0,0.0);
    pl->anyadirPunto(p);
    REQUIRE(false==pl->anyadirPunto(p));

    for(int i=1; i<15; i++)
    {
        p = new Punto(i,i);
        pl->anyadirPunto(p);
        REQUIRE(true==pl->contienePunto(p));
    }

    p = new Punto(15.0,15.0);
    REQUIRE(false==pl->anyadirPunto(p));
    REQUIRE(false==pl->contienePunto(p));

}


TEST_CASE("testEliminarPunto", "[EliminarPunto]" )
{

    Polilinea * pl = new Polilinea("polilinea");
    Punto * p = new Punto(0.0,0.0);
    pl->anyadirPunto(p);
    REQUIRE(true==pl->eliminarPunto(p));
    REQUIRE(false==pl->contienePunto(p));


    for(int i=0; i<15; i++)
    {
        p = new Punto(i,i);
        pl->anyadirPunto(p);
    }

    p = new Punto(15.0,15.0);
    REQUIRE(false==pl->eliminarPunto(p));

    p = new Punto(5.0,5.0);
    REQUIRE(true==pl->eliminarPunto(p));
    REQUIRE(false==pl->contienePunto(p));

    p = new Punto(14,14);
    REQUIRE(true==pl->eliminarPunto(p));
    REQUIRE(false==pl->contienePunto(p));

}

TEST_CASE("testEstanAlineados", "[PuntosAlineados]" )
{

    Polilinea * pl = new Polilinea("polilinea");
    REQUIRE(true==pl->estanAlineados());

    Punto *p;
    p = new Punto(0,0);
    pl->anyadirPunto(p);
    REQUIRE(true==pl->estanAlineados());

    p = new Punto(1,1);
    p->setCoordAngular(0);
    pl->anyadirPunto(p);
    REQUIRE(true==pl->estanAlineados());

    for(int i=2; i<13; i++)
    {
        p = new Punto(i,i);
        p->setCoordRadial(i*i);
        p->setCoordAngular(0);
        pl->anyadirPunto(p);
        REQUIRE(true==pl->estanAlineados());
    }

    p = new Punto(-1,5);
    pl->anyadirPunto(p);
    REQUIRE(false==pl->estanAlineados());

}





TEST_CASE("testPuntoMasAlejado", "[PuntoMasAlejado]" )
{

    Polilinea *pl = new Polilinea("polilinea");

    REQUIRE(NULL==pl->puntoMasAlejado());


    Punto *p;
    for(int i=0; i<15; i++)
    {
        p = new Punto(i,i);
        pl->anyadirPunto(p);
    }

    REQUIRE( iguales( pl->puntoMasAlejado()->getX() , 14.0));
    REQUIRE( iguales( pl->puntoMasAlejado()->getY() , 14.0));


    Polilinea *pl2 = new Polilinea("polilinea");
    for(int i=30; i>=16; i--)
    {
        p = new Punto(i,i);
        pl2->anyadirPunto(p);
    }

    REQUIRE( iguales( pl2->puntoMasAlejado()->getX() , 30.0));
    REQUIRE( iguales( pl2->puntoMasAlejado()->getY() , 30.0));

}


TEST_CASE("testPuntoMasCercano", "[PuntoMasCercano]" )
{
    Polilinea *pl = new Polilinea("polilinea");


    REQUIRE(NULL==pl->puntoMasCercano());

    Punto *p;
    for(int i=0; i<15; i++)
    {
        p = new Punto(i,i);
        pl->anyadirPunto(p);
    }
    REQUIRE( iguales( pl->puntoMasCercano()->getX() , 0.0));
    REQUIRE( iguales( pl->puntoMasCercano()->getY() , 0.0));

    Polilinea *pl2 = new Polilinea("polilinea");
    for(int i=30; i>=16; i--)
    {
        p = new Punto(i,i);
        pl2->anyadirPunto(p);
    }

    REQUIRE( iguales( pl2->puntoMasCercano()->getX() , 16.0));
    REQUIRE( iguales( pl2->puntoMasCercano()->getY() , 16.0));




}




TEST_CASE("testNumeroPuntos", "[NumeroPuntos]" )
{

    Polilinea * pl = new Polilinea("polilinea");
    REQUIRE(0==pl->numeroPuntos());
    Punto * p;

    for(int i=0; i<15; i++)
    {
        p = new Punto(i,i);
        pl->anyadirPunto(p);
        REQUIRE(i+1==pl->numeroPuntos());
    }

    p = new Punto(15.0,15.0);
    pl->anyadirPunto(p);
    REQUIRE(15==pl->numeroPuntos());

    		for(int i=14;i>=0;i--) {
    			p = new Punto(i,i);
    			pl->eliminarPunto(p);
    			REQUIRE(i==pl->numeroPuntos());
    		}

}

