#include "Paciente.h"
#include <iostream>

using namespace std;

paciente leerPaciente()
{
    paciente p;
    cout<<"Introduir el nombre del paciente:"<<endl;
    cin>>p.nombre;
    cout<<"Introducir el DNI del paciente:"<<endl;
    cin>>p.dni;
    cout<<"Introducir la edad del paciente:"<<endl;
    cin>>p.edad;
    return (p);
}
void mostrarPaciente (paciente p)
{
    cout<<"El nombre del paciente es:"<<endl;
    cout<<p.nombre<<endl;
    cout<<"El DNI del paciente es:"<<endl;
    cout<<p.dni<<endl;
    cout<<"La edad del paciente es:"<<endl;
    cout<<p.edad<<endl;
}
int calculaEdad (paciente p)
{
   return(p.edad);
}
