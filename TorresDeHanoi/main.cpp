#include <iostream>


using namespace std;

void mueve(int, char, char, char);

int main()
{
    int n;
    cout<<"Introduce una cantidad de discos"<<endl;
    cin>>n;
    char palo1;
    cout<<"Introduce el primer palo"<<endl;
    cin>>palo1;
    char palo2;
    cout<<"Introduce el segundo palo"<<endl;
    cin>>palo2;
    char palo3;
    cout<<"Introduce el tercer palo"<<endl;
    cin>>palo3;
    mueve(n,palo1,palo2,palo3);
}
void mueve (int n, char origen, char destino, char auxiliar)
//Precondicion: n>=1
//Postcondicion: escribe los movimientos necesarios para mover correctamente n discos desde origen a destino
{
    if(n==1)
    {
        cout<<"Muevo el disco 1 desde  "<<origen<<" a "<<destino<<endl;
    }
    else
    {

        mueve((n-1),origen, auxiliar, destino);
        cout<<"Muevo el disco " << n << " de "<<origen<<"  a  "<<destino<<endl;
        mueve((n-1),auxiliar, destino, origen);
    }
}
