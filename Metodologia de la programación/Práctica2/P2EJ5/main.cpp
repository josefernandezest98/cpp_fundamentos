#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
 float pies;
 float yardas, pulgadas, centimetros, metros;
 cout << "Introduzca una distancia: ";
 cin >> pies;
 yardas = pies/3.0;
 pulgadas = pies * 12;
 centimetros = 2'54 * pulgadas;
 metros = centimetros / 100;
 cout << yardas << pulgadas << centimetros << metros;
 system("PAUSE");
 return 0;
}
