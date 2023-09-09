#include <iostream>
using namespace std;

int main()
{
    int panjang, lebar, luas, sisi;
    cout << "Masukan Panjang Persegi:"<< endl;
    cin >>panjang;
    cout << "Masukan Lebar Persegi:"<< endl;
    cin >> lebar;

    luas =  panjang * lebar;
    cout << "Luas Persegi Panjang:"<<luas << endl;

    sisi = 4 * panjang;
    cout << "Keliling Persegi:" << sisi << endl;
}