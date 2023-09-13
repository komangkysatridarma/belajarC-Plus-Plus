#include <iostream>
using namespace std;

int main ()
{
    int nilai;

    cout << "Input Nilai:"<<endl;
    cin >> nilai;
    if (nilai>100){
       cout << "Nilai Harus Dibawah 100";
    }
    else if (nilai<0){
        cout<< "Nilai Harus 0-100";
    }
    else if (nilai>95 && nilai <=100) {
        cout << "Nilai A+";
    }
    else if (nilai>90) {
        cout << "Nilai A";
    }
    else if (nilai>80) {
        cout << "Nilai B";
    }
    else if (nilai>70) {
        cout << "Nilai C";
    }
    else if (nilai<70) {
        cout << "Tidak Lulus";
    }
    
}

// Ctrl + d 
