#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char c;
    bool encontrado;
 encontrado=false; /*Solución del problema trivial*/
cin.unsetf(ios::skipws); //Evita que cin ignore espacios en blanco
cout <<endl<<"Introduce un texto terminado en punto y pulsa ENTER: ";
cin>>c;
while ( (c != '.') && (encontrado == false) )
 {
 if (c == 'w')
 {
 encontrado=true;
 }
 cin>>c;
 }
 cout <<endl<<"¿La letra w estaba en el texto?: "<<encontrado;
 system("PAUSE");
return 0;
}
