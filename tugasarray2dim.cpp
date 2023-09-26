#include <iostream>
using namespace std;

int main ()
{
    string huruf[3][4];

    for (int x=0; x <3; x++)
    {
        for (int y=0; y <4; y++)
        {
            cout << "Masukan Huruf:["<<x<<"]["<<y<<"]=";
            cin >> huruf[x][y];
        }
        cout << endl;
    }

    for (int x=0; x <3; x++)
    {
        for(int y=0; y <4; y++)
        {
            cout <<"| " <<huruf[x][y]<<" "<<"|";
        }
        cout<< endl;
    }
}