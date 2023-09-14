#include <iostream>
using namespace std;

int main ()
{
    int kecil;
    int besar;
    int yelan[5] = {}; 
    int input;

        cout << "Masukan index kamu:";
        cin >> input;
    
    for (int x = 0; x <=input; x++)
    {
        cout << "Masukan Nilai Anda:";
        cin >> yelan[x];
    }

    kecil = yelan[0];
    besar = yelan [0];

    for (int x = 0; x <=input; x++){
        if (yelan[x] < kecil ){
            kecil = yelan[x];
        }
        else if (yelan [x] > besar)
            besar = yelan [x];

    }
    cout << "=======================================" << endl;
    cout << "Nilai Terkecil Adalah:" << kecil << endl;
    cout << "Nilai Terbesar Adalah:"<< besar << endl;
}