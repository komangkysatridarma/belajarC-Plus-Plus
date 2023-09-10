#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int x[2][3];

    for (int a = 0; a <2; a++)
    {
        for (int c = 0; c <3; c++)
        {
            cout <<"a ["<<a<<"]["<<c<<"] = ";
            cin >> x[a][c];
        }
        cout << endl;
    }
    for (int a = 0; a <2; a++)
    {
        for (int c = 0; c <3; c++)
        {
            cout <<x[a][c]<<" ";
        }
        cout << endl;
    }
    getch();
}