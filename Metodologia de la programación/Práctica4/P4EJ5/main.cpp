#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
float limite;
int n;
float suma;
 cout << "Introduce el límite ";
 cin >> limite;
 n = 0; /* Caso Inicial */
 suma = 0;
while (suma < limite) /*Rellena la condición de continuación*/
 {
 n = n + 1; /* Instrucciones que se repiten */
 suma = suma + 1.0/n;
 }
 cout << "Nº de términos " << n << "suma = " << suma;
system("PAUSE");
return 0;
}
