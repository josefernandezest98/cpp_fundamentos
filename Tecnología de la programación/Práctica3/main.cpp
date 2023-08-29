#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
struct tEstudiante
{
    char dni[10];
    char nombre[30];
    char apellido[50];
};
struct tNotaAsig
{
    char codAsignatura[4];
    char dni[10];
    float nota;
};


int main ()
{
    char nombrefEestudiantes[30];
    cout<<"Introduce el nombre del fichero de estudiantes:"<<endl;
    cin>>nombrefEestudiantes;
    char nombrefNotas[30];
    cout<<"Introduce el nombre del fichero de notas:"<<endl;
    cin>>nombrefNotas;

    ifstream f1;
    f1.open(nombrefEestudiantes, ios::in|ios::binary);
    if (f1)
    {
        cout<<"El fichero de estudiantes existe"<<endl;
        f1.close();
    }
    else
    {
        ofstream fe;
        fe.open(nombrefEestudiantes, ios::out|ios::binary);
        if (fe)
        {
            cout<<"Fichero creado correctamente"<<endl;
            fe.close();
        }
        else
        {
            cout<<"No se ha podido crear el fichero"<<endl;
        }
    }

    ifstream f2;
    f2.open(nombrefNotas, ios::in|ios::binary);
    if (f2)
    {
        cout<<"El fichero de estudiantes existe"<<endl;
        f2.close();
    }
    else
    {
        ofstream fn;
        fn.open(nombrefNotas, ios::out|ios::binary);
        if (fn)
        {
            cout<<"Fichero creado correctamente"<<endl;
            fn.close();
        }
        else
        {
            cout<<"No se ha podido crear el fichero"<<endl;
        }
    }

    int opcion;
    do{
        cout << "1. Dar de alta un estudiante. " << endl;
        cout << "2. Mostrar información de los estudiantes de una asignatura. " << endl;
        cout << "3. Modificar nota de un estudiante en una asignatura. " << endl;
        cout << "4. Dar de baja un estudiante. " << endl;
        cout << "5. Nota media de una asignatura. " << endl;
        cout << "6. Terminar. " << endl;
        cout << "Elegir opción: " << endl;
        cin >> opcion;

    switch(opcion)
    {
        case 1:
            {

            }break;
        case 2:
            {

            }break;
        case 3:
            {

            }break;
        case 4:
            {

            }break;
        case 5:
            {

            }break;
        case 6:
            {

            }break;


    }

    }while(opcion!=6);
   return 0;
}

tEstudiante completarInformacionEstudiante(char dni[])
//{Pre: }
//{Post: devuelve un tEstudiante con el DNI recibido como parámetro y el
//resto de información leída por teclado.}
{
    ifstream alumnos;
    alumnos.open(nombrefEstudiantes,ios::in|ios::binary);
    if(alumnos)
    {
        tEstudiante e;
        alumnos.read((char *)& e, sizeof(e));
        while(!alumnos.eof())
        {
            if(strcmp(dni,e.dni)==0)
            {
                cout<<"Introduce el nombre: "<<endl;
                cin>>e.nombre;
                cout<<"Introduce el apellido:"<<endl;
                cin>>e.apellido;
            }
            alumnos.read((char *)& e, sizeof(e));
            return (e);
        }
        alumnos.close();
    }else(cout<<"Error al abrir el fichero."<<endl);

}

tNotaAsig leerNota()
//{Pre: }
//{Post: devuelve un tNotaAsig con la información leída por teclado.}
{
    tNotaAsig n;
    cout<<"Introduce el codigo de la asignatura: "<<endl;
    cin>>n.codAsig;
    cout<<"Introduce el DNI: "<<endl;
    cin>>n.dni;
    cout<<"Introduce la nota: "<<endl;
    cin>>n.nota;
    return (n);
}

bool existeEstudiante (char nombrefEstudiantes[],char dni[])
//{Pre: nombrefEstudiantes es el nombre de un fichero físico existente que
//contiene registros de tipo tEstudiante ordenados por DNI.}
//{Post: devuelve verdad si en el fichero de estudiantes existe un
//estudiante con el dni indicado, y falso en caso contrario.}
{
    bool encontrado=false;

    ifstream alumnos;
    alumnos.open(nombrefEstudiante,ios::in|ios::binary);
    if(alumnos)
    {
        tEstudiante e;
        alumnos.read((char *)& e, sizeof(e));
        while((!alumnos.eof())&&(encontrado==false)))
        {
            if(strcmp(dni,e.dni)==0)
            {
                encontrado=true;
            }
            alumnos.read((char *)& e, sizeof(e));
        }
        alumnos.close();
        return (encontrado);
    }else(cout<<"Error al abrir el fichero."<<endl);

}

void guardaEstudiante(char nombrefEstudiantes[],tEstudiante e)
//{Pre: nombrefEstudiantes es el nombre de un fichero físico existente que
//contiene registros de tipo tEstudiante ordenados por DNI; además,
//el tEstudiante e no está incluido en el fichero.}
//{Post: añade, de manera ordenada, el tEstudiante e al fichero
//nombrefEstudiantes.}
{
    ifstream alumnos;
    ofstream auxiliar;

    alumnos.open(nombrefEstudiantes,ios::in|ios::binary);
    auxiliar.open("Auxiliar.DAT",ios::in|ios::binary);

    if(alumnos&&auxiliar)
    {
        tEstudiante a;
        alumnos.read((char *)& a, sizeof(a));
        while(!alumno.eof())
        {
            if(strcmp(a.dni,e.dni)<0)
            {
                auxiliar.write((char *)& a, sizeof(a));
                alumnos.read((char *)& a, sizeof(a));
            }
            auxiliar.write((char *)& e, sizeof(e));
            while(!alumnos.eof())
            {
                auxiliar.write((char *)& a, sizeof(a));
                alumnos.read((char *)& a, sizeof(a));
            }
        }
        alumnos.close();
        auxiliar.close();
        remove(nombrefEstudiantes);
        rename("Auxiliar.DAT",nombrefEstudiantes);
    }else(cout<<"Error al abrir los ficheros"<<endl);
}

void guardarNota(char nombrefNotas[],tNotaAsig n)
//{Pre: nombrefNotas es el nombre de un fichero físico existente que
//contiene registros de tipo tNotaAsig ordenados por codAsignatura;
//además, la tNotaAsig n no está incluida en el fichero.}
//{Post: añade, de manera ordenada, la tNotaAsig n al fichero nombrefNotas.}
{
    ifstream notas;
    ofstream auxiliar;

    notas.open(nombrefNotas,ios::in|ios::binary);
    auxiliar.open("Auxiliar.DAT",ios::in|ios::binary);

    if(notas&&auxiliar)
    {
        tNotaAsig a;
        notas.read((char *)& a, sizeof(a));
        while(!notas.eof())
        {
            if(strcmp(a.codAsignatura,n.codAsignatura)<0)
            {
                auxiliar.write((char *)& a, sizeof(a));
                notas.read((char *)& a, sizeof(a));
            }
            auxiliar.write((char *)& n, sizeof(n));
            while(!notas.eof())
            {
                auxiliar.write((char *)& a, sizeof(a));
                notas.read((char *)& a, sizeof(a));
            }
        }
        notas.close();
        auxiliar.close();
        remove(nombrefNotas);
        rename("Auxiliar.DAT",nombrefNotas);
    }else(cout<<"Error al abrir los ficheros"<<endl);
}

void altaNota(char nombrefEstudiantes[],char nombrefNotas[])
//{Pre: nombrefNotas es el nombre de un fichero físico existente que
//contiene registros de tipo tNotaAsig ordenados por codAsignatura; y
//nombrefEstudiantes es el nombre de un fichero físico existente que
//contiene registros de tipo tEstudiante ordenados por DNI.}
//{Post: da de alta una nota del modo explicado en el enunciado de este
//apartado.}
{
    bool esta;
    char dni[10];
    char codAsignatura[4];
    float nota;

    tEstudiante nuevoEstudiante;
    tEstudiante e;
    tNotasAsig n;

    cout<<"Introduce el DNI del estudiante: "<<endl;
    cin>>dni;

    //ifstream alumnos;
    //ifstream notas;

    //alumnos.open(nombrefEstudiantes,ios::in|ios::binary);
    //notas.open(nombrefNotas,ios::in|ios::binary);

    //if(notas&&alumnos)
    //{

        esta=existeEstudiante(nombrefEstudiantes,dni);

        if(esta==false)
        {
            nuevoEstudiante=completarInformacionEstudiante(dni)
            guardaEstudiante(nombrefEstudiantes,nuevoEstudiante);
            n=leerNota();
            guardarNota(nombrefNotas,n);
        }
        else{
            n=leerNota();
            guardarNota(notas,n);
        //}
        //alumnos.close();
        //notas.close();
    //}else(cout<<"Error al abrir los ficheros"<<endl);

}








void buscarEstudiante(char nombrefEstudiantes[],char dni[],tEstudiante& e)
{
    ifstream alumnos;
    alumnos.open(nombrefEstudiantes,ios::in|ios::binary);

    tEstudiante a;
    bool esta=false;
    esta=existeEstudiante(alumnos,dni)
    if(alumnos&&esta==true)
    {
        alumnos.read((char *)& a, sizeof(a));
        while(!alumnos.eof())
        {
            if(strcmp(dni,a.dni)==0)
            {
                  e=a;
                  esta=false;
            }
            alumnos.read((char *)& a, sizeof(a));
        }
        alumnos.close();
    }else{cout<<"El alumno no existe."<<endl;}

}

bool existeAsignatura(char nombrefNotas[],char codigo[])
{
    ifstream notas;
    tNotasAsig n;
    bool encontrado=false;
    notas.open(nombrefNotas,ios::in|ios::binary);
    if(notas)
    {
        notas.read((char *)& a, sizeof(a));
        while((!notas.eof())&&(!encontrado))
        {
            if(strcmp(codigo,n.codAsignatura)==0)
            {
                econtrado=true;
            }
            notas.read((char *)& a, sizeof(a));
        }
        notas.close();
    }
    else
    {
        cout<<"Error"<<endl;
    }
    return encontrado;
}

void formateaNotasAsignatura(char nombrefNotas[],char nombrefEstudiantes[],char codigo[])
//muestra por pantalla las notas que pertenece a esa asignatura
{
    ifstream alumnos;
    ifstream notas;
    alumnos.open(nombrefNotas,ios::in|ios::binary);
    notas.open(nombrefNotas,ios::in|ios::binary);
    if(alumnos&&notas)

}
void muestraNotasAsignatura(char nombrefNotas[],char nombrefEstudiantes[])
{

}


bool existeNotaEstudiante(char nombrefNotas[],char codigo[],char dni[])
//devuelve verdad si existe una entrada con el codigo y el dni
{
    ifstream notas;
    bool estaDNI=false;
    bool estaCodigo=existeAsignatura(notas,codigo);
    notas.open(nombrefNotas,ios::in|ios::binary);
    if (notas)
    {
        notas.read((char *)& a, sizeof(a));
        while((!notas.eof())&&(!encontrado))
        {
            if(strcmp(codigo,n.codAsignatura)==0)
            {
                econtrado=true;
            }
            notas.read((char *)& a, sizeof(a));
        }
        notas.close();
    }
    else
    {
        cout<<"Error"<<endl;
    }



}

void modificaNota(char nombrefNotas[])
{
    ifstream notas;
    tNotasAsig n;
    char dni[];
    cahr codigo[];
    float nota;
    bool existeDNIyCODIGO;
    cout<<"Introducir el dni del alumno"<<endl;
    cin>>dni;
    cout<<"Introducir el codigo de la asignatura"<<endl;
    cin>>codigo;
    cout<<"Introducir la nota del alumno"<<endl;
    cin>>nota;
    existeDNIyCODIGO=(existeNotaEstudiante(notas,codigo,dni));
    if(existeDNIyCODIGO)
    {
        n.nota=nota;
    }
    else
    {
        cout<<"No existe el registro"<<endl;
    }
}

void eliminaEstudiante(char nombrefEstudiantes[],char dni[])
{
    ifstream alumnos;
    ofstream aux;
    tEstudiante e;
    alumnos.open(nombrefEstudiantes,ios::in|ios::binary);
    aux.open(nombrefEstudiantes,ios::out|ios::binary);
    if(alumnos&&aux)
    {
        alumnos.read((char *)& e, sizeof(e));
        while((!alumnos.eof())&&(esta))
        {
            if(strcmp(e.dni,dni)<0)
            {
                aux.write((char *)& e, sizeof(e));
                alumnos.read((char *)& e, sizeof(e));
            }
            alumnos.read((char *)& e, sizeof(e));
            while(!notas.eof())
            {
                aux.write((char *)& e, sizeof(e));
                notas.read((char *)& e, sizeof(e));
            }
        }
        alumnos.close();
        aux.close();
        remove(nombrefEstudiantes);
        rename("aux.DAT",nombrefEstudiantes);
    }
    else
    {
        cout<<"Error"<<endl;
    }
}
bool alumnoFicheroNotas (char nombrefNotas[],char dni[])
{
    ifstream notas;
    tNotasAsig n;
    bool encontrado=false;
    notas.open(nombrefNotas,ios::in|ios::binary);
    if(notas)
    {
        notas.read((char *)& a, sizeof(a));
        while((!notas.eof())&&(!encontrado))
        {
            if(strcmp(dni,n.dni)==0)
            {
                econtrado=true;
            }
            notas.read((char *)& a, sizeof(a));
        }
        notas.close();
    }
    else
    {
        cout<<"Error"<<endl;
    }
    return encontrado;
}

}
void eliminaNotasEstudiante(char nombrefNotas[],char dni[])
{
    ifstream notas;
    ofstream aux;
    tNotasAsig n;
    notas.open(nombrefNotas,ios::in|ios::binary);
    aux.open(nombrefNotas,ios::out|ios::binary);
    bool esta=alumnoFicheroNotas(notas,dni);
    if(notas&&aux)
    {
        notas.read((char *)& n, sizeof(n));
        while((!notas.eof())&&(esta))
        {
            if(strcmp(n.dni,dni))
            {
                aux.write((char *)& n, sizeof(n));
                alumnos.read((char *)& n, sizeof(n));
            }
            alumnos.read((char *)& n, sizeof(n));
            while(!notas.eof())
            {
                aux.write((char *)& n, sizeof(n));
                notas.read((char *)& n, sizeof(n));
            }
        }
        notas.close();
        aux.close();
        remove(nombrefNotas);
        rename("aux.DAT",nombrefNotas);
    }
    else
    {
        cout<<"Error"<<endl;
    }
}








