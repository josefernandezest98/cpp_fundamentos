#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Introduccion de la secuencia
    int n, maximo, num;
    bool contar = false;
    cout << "Introduzca una secuencia de numeros acabada en -1: ";
    cin >> n;
    maximo = n;
    num = 0;

    while(n != -1)
    {
       //Contamos despues del 0
       if (contar == true){
           num = num + 1;
       }

       //Calculo del maximo
       if (n > maximo)
       {
           maximo = n;
       }

       //Activar conteo
       if ((n == 0)&&(contar == false)){
           contar = true;
       }
    cin >> n;
    }
    cout << maximo << " " << num;


    system("PAUSE");
    return 0;
}
