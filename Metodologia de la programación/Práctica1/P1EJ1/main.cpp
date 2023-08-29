#include <iostream>
using namespace std;
int main()
{
 float a,b,c,d; // variables para los coeficientes
 float x; // variable para la incógnita
 float p; // variable para el resultado
 /* Entrada de datos */
 cout << "Introducir los valores de: " << endl;

 cout << "a = ? ";
 cin >> a;

 cout << "b = ? ";
 cin >> b;

 cout << "c = ? ";
 cin >> c;
 cout << "d = ? ";
 cin >> d;

 cout << "x = ? ";
 cin >> x;
 // Proceso
 p = x*(x*(a*x+b)+c)+d;
 // Salida
 cout << "La solución es p = " << p;
 return 0;
}
