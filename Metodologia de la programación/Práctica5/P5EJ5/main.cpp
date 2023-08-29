#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char c;
    int nD, nC;
    bool masDqueC;
    cin.unsetf(ios::skipws);
    cout << "Introduzca un texto acabado en punto: " << endl;
    cin >> c;
    nD = 0;
    nC = 0;
    while (c != '.')
    {
        if(c == 'c')
        {
            nC = nC + 1;
        }
        if(c == 'd')
        {
            nD = nD + 1;
        }
        cin >> c;
    }
    if(nD > nC)
    {
        masDqueC = true;
    }
    else
    {
        masDqueC = false;
    }
    cout <<masDqueC;
    system("PAUSE");
    return 0;
}
