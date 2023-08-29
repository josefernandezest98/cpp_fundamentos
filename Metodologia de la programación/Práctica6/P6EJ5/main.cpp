#include <iostream>
#include <cstdlib>
using namespace std;

float potencia(float , int );
float binomio(int , int );

int main()
{
float x, y;
int n;
int i, r;
float aux1, aux2, aux3, aux4;
cout << "Introduzca: " << "x = ";
cin >> x;
cout << "y = ";
cin >> y;
cout << "n = ";
cin >> n;
r = 0;
i = 0;
aux4 = 0;
    while((n>=1)&&(i<=n)&&(r<=n))
    {
        aux1 = potencia(x,n);
        aux2 = potencia(y,i);
        aux3 = binomio(n,r);
        aux4 = aux1 * aux2 * aux3;
        aux4 = aux4 + aux1 * aux2 * aux3;
        i = i + 1;
        n = n + 1;
        r = r + 1;
    }
    cout << aux4;
system ("PAUSE");
return 0;
}
float potencia(float pot , int expo )
{
    float resultado;
    int ind;
    ind = 1;
    while (ind <= expo)
    {
        resultado = pot * pot;
        ind = ind + 1;
    }
    return resultado;
}
float binomio(int m , int n )
{
    float bin;
    int num, den, mMenosN;
    num = 1;
    den = 1;
    mMenosN = m - n;
    while ((m >= 0)&&(n >= 0)&&(mMenosN >= 0))
    {
        num = num * m;
        den = den * n * mMenosN;
        m = m - 1;
        n = n - 1;
        mMenosN = mMenosN - 1;
        bin = num / den;
    }
    return bin;
}
