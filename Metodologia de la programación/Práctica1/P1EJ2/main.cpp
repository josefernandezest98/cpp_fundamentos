#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c; /* variables de coeficientes */
float discriminante;
float x1,x2; /* variables de soluciones */
 cout << "introduce los coeficientes de ax^2+bx+c";
 cout << endl<< "a= ? ";
 cin >>a;
 cout << endl<< "b= ? ";
 cin >>b; /* lectura de los coeficientes */
 cout << endl<< "c= ? ";
 cin >>c;
 /* cálculo de las raices */
 discriminante=b*b-4*a*c;
 x1=(-b + sqrt(discriminante)) / (2*a);
 x2=(-b - sqrt(discriminante)) / (2*a);
 /* muestra los resultados */
 cout << endl<< "Las soluciones son: "<< x1 << " y "<< x2;
return 0;
}
