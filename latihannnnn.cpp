#include <iostream>
using namespace std;

int main ()
{
    int minimum, jumlah;

    cout << "Masukan Jumlah Elemen:";
    cin >> jumlah;

    int array [jumlah];
    cout << "Masukan " << jumlah << " angka\n";

    for (int i = 0; i <jumlah; i++)
    {
        cout << "elemen ke-" << (i+1) << ":";
        cin >> array [i];
    }

    minimum = array [0];
    for (int i = 0; i < jumlah; i++)
    {
        if (array [i] < minimum)
        {
            minimum = array [i];
        }
    }

    cout << "Nilai Minimum adalah " << minimum << " Berada di elemen ke" << endl;
}