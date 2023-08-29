#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    float h;
    cout << "Introduzca los valores de los catetos: "<<endl << "a = ?";
    cin >> a;
    cout << "b = ?";
    cin >> b;
    h = sqrt( a*a + b*b);
    cout << "h = "<< h;
    return 0;
}
