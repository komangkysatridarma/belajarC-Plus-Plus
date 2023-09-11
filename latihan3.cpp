#include <iostream>
using namespace std;

int main()
{
    string namaSaya;
    int umurSaya;
    int umurTeman;
    int umurKK;

    cout << "Nama Saya:" << endl;
    cin >> namaSaya;
    cout <<"umur saya:" << endl;
    cin >> umurSaya;
    cout << "Umur teman:" << endl;
    cin >> umurTeman;
    cout << "Umur Kk:" << endl;
    cin >> umurKK;

    int hasil = umurSaya * umurTeman + umurKK;
    cout << "Hasil Dari Umur Saya Dikali Umur Teman Dan Ditambah Umur KK:" <<hasil << endl;


}