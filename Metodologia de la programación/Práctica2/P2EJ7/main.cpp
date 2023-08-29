#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n; /*090876*/
    int ano, mes, dia, aux;
    cout << "Introduzca la fecha = ";
    cin >> n;
    ano = n % 100 + 2000;
    aux = n / 100;
    mes = aux - (n / 10000 * 100);
    dia = n / 10000;
    cout << dia << "-" << mes << "-" << ano;
    system("PAUSE");
    return 0;
}
