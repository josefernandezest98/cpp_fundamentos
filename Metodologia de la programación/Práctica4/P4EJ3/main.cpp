#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
char letra;
int contador;
 contador = 0; /*Solución del problema trivial*/
 cin.unsetf(ios::skipws);
 cout << endl << "Introduce un texto terminado en punto y pulsa ENTER: ";
 cin >> letra;
while (letra != '.')
 {
 contador = contador + 1;
 cin >> letra;
 }
 cout << endl << "El número de caracteres del texto es: "<< contador;
 system("PAUSE");
 return 0;
}
