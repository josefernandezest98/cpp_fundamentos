#include "Libro.h"
#include "Bibliografia.h"
#include "UsaLibro.h"
#include "UsaBibliografia.h"
#include <iostream>
#include <cstring>
#include <cstdio>


using namespace std;

int main()
{
    tbibliografia b;        //Es la bibliografia que usare en todos los casos,una vez creada.
    bool existe=false;      //Booleano que empleare para comprobar que la bibliografia ha sido creada.

    int opcion;
    do
    {
        cout<<"MENU PRINCIAL:"<<endl;
        cout<<"1.Crear bibliografia."<<endl;
        cout<<"2.Anadir libro."<<endl;
        cout<<"3.Modificar anio de un libro."<<endl;
        cout<<"4.Listar libros por ISBN."<<endl;
        cout<<"5.Listar libros por orden decreciente de anio."<<endl;
        cout<<"6.Terminar."<<endl;
        cout<<"Elegir una opcion:"<<endl;
        cin>>opcion;

        switch(opcion)
        {
            case 1:
            {
                crearBiliografia(b);
                cout<<"Se ha creado una bibliografia"<<endl;
                existe=true;
            }break;

            case 2:
            {
                tlibro l;

                if(existe==false)
                {
                    cout<<"No hay una bibliografía,por lo tanto hay que crearla."<<endl;
                }else{
                        leerLibro(l);
                        anadirLibro(b,l);
                        cout<<"El libro ha sido anadido a la bibliografia."<<endl;
                    }
            }break;

            case 3:
            {
                char ISBNLibro[10];
                int nAnio;

                if(bibliografiaSinLibros(b))
                {
                    cout<<"No hay libros en esta bibliografia"<<endl;
                }else{
                        if(existe==false)
                        {
                            cout<<"No hay una bibliografía,por lo tanto hay que crearla."<<endl;
                        }else{
                                cout<<"Introduce el ISBN del libro cuyo anio se quiere modificar"<<endl;
                                fflush(stdin);
                                gets(ISBNLibro);

                                if(existeLibro(b,ISBNLibro)==true)
                                {
                                    cout<<"Introduce el nuevo anio del libro:"<<endl;
                                    cin>>nAnio;
                                    modificarAnioLibro(b,ISBNLibro,nAnio);
                                    cout<<"El anio del libro ha sido modificado."<<endl;
                                }else{
                                        cout<<"Este libro no se encuentra en esta bibliografia."<<endl;
                                    }
                            }
                    }
            }break;

            case 4:
            {
                if(bibliografiaSinLibros(b))
                {
                    cout<<"No hay libros en esta bibliografia"<<endl;
                }else{
                        if(existe==false)
                        {
                            cout<<"No hay una bibliografía,por lo tanto hay que crearla."<<endl;
                        }else{
                                mostrarBibliografiaISBN(b);
                            }
                    }
            }break;

            case 5:{

                if(bibliografiaSinLibros(b))
                {
                    cout<<"No hay libros en esta bibliografia"<<endl;
                }else{
                        if(existe==false)
                        {
                            cout<<"No hay una bibliografía,por lo tanto hay que crearla."<<endl;
                        }else{
                                mostrarBibliografiaAnio(b);
                            }
                    }
            }break;

            case 6:
            {
              //<Vacia.
            }break;
//
        }

    }while(opcion!=6);

    return 0;
}
