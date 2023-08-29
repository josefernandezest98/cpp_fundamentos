#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 char color;
 /* Entrada de datos */
 cout << endl << "Introduce una sóla letra: " << endl;
 cout << "color = ? ";
 cin >> color;
 switch (color)
 {
    case 'r':
    case 'R':
        {
        cout << endl << "Rojo";
        }
        break;
    case 'v':
    case 'V':
        {
        cout << endl << "Verde";
        }
        break;
    case 'a':
    case 'A':
        {
        cout << endl << "Azul";
        }
        break;
        default:
        {
        cout << endl << "Negro";
        }
    }
 system("PAUSE");
 return 0;