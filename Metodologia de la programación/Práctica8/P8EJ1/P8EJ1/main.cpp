#include <iostream>
#include <cstring>

using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int agno;
};

void leerFecha (Fecha &);
bool compara (Fecha,Fecha);

int main()
{
    Fecha f1, f2;
    bool iguales;
    leerFecha(f1);
    leerFecha(f2);

    iguales = compara(f1,f2);
    cout << iguales << ". ";

    return 0;
}

void leerFecha (Fecha & f)
{
    do{
        cout << "Introduzca un dia = ";
        cin >> f.dia;
    }while(!((f.dia >= 1)&&(f.dia <= 31)));
    do{
        cout << "Introduzca un mes = ";
        cin >> f.mes;
    }while(!((f.mes >= 1)&&(f.mes <= 12)));
    cout << "Introduzca un agno = ";
    cin >> f.agno;
}

bool compara (Fecha f1,Fecha f2)
{
    if((f1.dia == f2.dia)&&(f1.mes == f2.mes)&&(f1.agno == f2.agno))
        {
            return(true);
        }
    else
        {
            return(false);
        }
}
