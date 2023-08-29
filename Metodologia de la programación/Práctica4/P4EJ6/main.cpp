#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 int N; /*ENTRADA*/
 int suma; /*SALIDA*/
 int sumando;
 cout << "N = ";
 cin >> N;
 suma = 0;
 sumando = 0;

while (sumando < N)
 {
 sumando = sumando + 1;
 suma = suma + sumando;
 }
 cout << endl << suma;
 system("PAUSE");
 return 0;
}
