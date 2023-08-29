#include <iostream>

using namespace std;

int main()
{
    int *p;
    int x = 5;

    p = &x;

    cout << "La direccion de x es " << &x << endl;
    cout << "La direccion de p es "<< &p << endl;
    cout << "El destino de p es " << *p << endl;
    cout << "El valor de p es " << p << endl;
    cout << "La direccion del destino de p es " << &*p <<endl;
    cout << "De nada aletandra"<<endl;

    return 0;
}

