#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int mes, ano, dias1;
    do
    {
    cout << "Introduzca un mes = ";
    cin >> mes;
    cout << "año = ";
    cin >> ano;
    }while (!((mes >= 0)&&(12 >= mes)&&(ano >= 0)));
    if (((ano % 4 == 0)&&(ano % 100 != 0))or((ano % 100 == 0)&&(ano % 400 == 0)))
    {
        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            {
                dias1 = 31;
            }break;
        case 2:
            {
                dias1 = 28;
            }break;
        case 4:
        case 6:
        case 9:
        case 11:
            {
                dias1 = 30;
            }break;
        }
    }
    else
    {
        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            {
                dias1 = 31;
            }break;
        case 2:
            {
                dias1 = 29;
            }break;
        case 4:
        case 6:
        case 9:
        case 11:
            {
                dias1 = 30;
            }break;
        }
    }

    cout << dias1;
 system("PAUSE");
 return 0;
}

