#include <iostream>
#include "Cola.h"
#include "Paciente.h"


using namespace std;

int main()
{
    int n;
    cola c;

    paciente p;
    cola atendidos;
    iniciarCola(atendidos);
    do
    {
        cout<<"Elegir una opcion:"<<endl;
        cout<<"1. Crear cola de citas."<<endl;
        cout<<"2. Cita"<<endl;
        cout<<"3. Atiende"<<endl;
        cout<<"4. Listado pacientes pendientes"<<endl;
        cout<<"5. Numero pacientes pendientes"<<endl;
        cout<<"6. Listado pacientes atendidos"<<endl;
        cout<<"7. Ver paciente mas joven"<<endl;
        cout<<"8. Fin"<<endl;
        cin>>n;
        switch (n)
        {
            case (1):
            {
                iniciarCola(c);
                break;
            }
            case (2):
            {

                p=leerPaciente();
                anadir (c,p);
                break;
            }
            case (3):
            {
                p=primero(c);
                anadir (atendidos,p);
                eliminar(c);
                break;
            }
            case (4):
            {
                cola aux;

                while (!colaVacia(c))
                {
                    paciente p;
                    p=primero(c);
                    anadir (aux,p);
                    mostrarPaciente(p);
                    eliminar(c);
                }
                while (!colaVacia(aux))
                {
                    anadir (c, primero(aux));
                    eliminar(aux);
                }
                break;
            }
            case (5):
            {
                int n=0;
                cola aux;
                while (!colaVacia(c))
                {
                    p=primero(c);
                    anadir (aux, p);
                    n++;
                    eliminar(c);
                }
                while (!colaVacia(aux))
                {
                    anadir (c, p);
                    eliminar(aux);
                }
                cout<<"Numero de pacientes pendientes: "<<n<<endl;
                break;
            }
            case (6):
            {
                cola aux;

                while (!colaVacia(c))
                {
                    paciente p;
                    p=primero(c);
                    anadir (aux,p);
                }
                while (!colaVacia(aux))
                {
                    paciente paux;
                    paux=primero(c);
                    mostrarPaciente(paux);
                    eliminar(aux);
                }
                break;
            }
            case (7):
            {
                cola aux;
                int joven=0;
                while (!colaVacia(c))
                {
                    p=primero(c);
                    anadir (aux, p);
                    eliminar(c);
                }
                while (!colaVacia(aux))
                {
                    anadir (c, p);
                    eliminar(aux);
                }

                while(!colaVacia(c)&&!colaVacia(aux))
                {
                    paciente paux;
                    p=primero(c);
                    paux=primero(aux);

                }
                break;
            }
            case (8):
            {
                break;
            }

        }
    }
    while (n!=8);
    return 0;
}
