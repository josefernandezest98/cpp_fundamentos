#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
float cota, e, termino;
int i;
 termino = 1;
 e = 1; /* Soluci�n del problema trivial */
 cout << endl << "Introduce un valor para la cota (positivo y 'peque�o'), cota = ";
 cin >> cota;
 i = 1;
while (termino < cota)
 {
 e = e + termino;
 i = i + 1;
 termino = termino / i; /* termino=1/i! */
 }
 cout << endl << "El valor aproximado del n�mero e es: " << e;
 system("PAUSE");
 return 0;
}
