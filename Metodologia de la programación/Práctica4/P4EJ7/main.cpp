#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int n;
do
{
    cout<<endl<<"Introduce un número entre 1 y 10: ";
    cin>>n;
} while(!((1<=n)&&(n<=10)));
 cout<<"Por fin has introducido un dato correcto! ";
system("PAUSE");
 return 0;
}
