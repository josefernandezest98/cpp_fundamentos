#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
 int minutos, segundos;
 float velocidad;
 int DISTANCIA;
 DISTANCIA=1500;
 cin >> minutos;
 cin >> segundos;
 velocidad = DISTANCIA/(60*minutos+segundos);
 cout << velocidad;
 system("PAUSE");
 return 0;
}
