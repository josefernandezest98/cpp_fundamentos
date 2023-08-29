#include <iostream>
#include <cstdlib>
using namespace std;
void compara(int &, int &);
int main()
{
int n1, n2, n3;
int aux;
 cout<<endl<<"Introduce los tres números:"<<endl;
 cin>>n1;
 cin>>n2;
 cin>>n3;
compara(n1,n2);
compara(n1,n3);
compara(n2,n3);
cout<<"El menor es "<<n1<<" y el mayor "<<n3;
system("PAUSE");
return 0;
}
void compara(int &, int &)
 {
     int n1, n2, aux;
     if(n1>n2)
     {
        aux = n1;
        n1 = n2;
        n2 = aux;
        cout << n1 << n2;
     }
 }

