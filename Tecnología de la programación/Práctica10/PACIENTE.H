#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

struct paciente
{
    char nombre[10];
    char dni[10];
    int edad;
};

paciente leerPaciente();
void mostrarPaciente (paciente p);
int calculaEdad (paciente p);

#endif // PACIENTE_H_INCLUDED
