#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
float limite;
int n;
float suma;
 cout << "Introduce el l�mite ";
 cin >> limite;
 n = 0; /* Caso Inicial */
 suma = 0;
while (suma < limite) /*Rellena la condici�n de continuaci�n*/
 {
 n = n + 1; /* Instrucciones que se repiten */
 suma = suma + 1.0/n;
 }
 cout << "N� de t�rminos " << n << "suma = " << suma;
system("PAUSE");
return 0;
}
