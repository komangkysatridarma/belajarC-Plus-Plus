#include <iostream>
using namespace std;

int main ()
{
    int angkaBesar;
    int angkaKecil;
    int keyz [5]= {};
    int input;

    cout << "Masukan Index Anda:"<< endl;
    cin >> input;

    for (int x = 0; x <=input; x++)
    {
        cout << "Masukan Nilai Anda:" << endl;
        cin >> keyz [x];
    }
    //BELAJAR DOANG INI MAH!!!!!!!!!!!
angkaKecil= keyz [0];
angkaBesar= keyz [0];

    for (int x = 0; x <=input; x++)
    {
        if(keyz[x] < angkaKecil){
            angkaKecil = keyz [x];
        }
        else if (keyz[x] > angkaBesar){
            angkaBesar = keyz[x];
        }
    }

    cout << "==============================" << endl;
    cout << "Nilai Terkecil Adalah:" << angkaKecil << endl;
    cout << "Nilai Terbesar Adalah:" << angkaBesar << endl;

}