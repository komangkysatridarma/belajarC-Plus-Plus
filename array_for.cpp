#include <iostream>
using namespace std;

int main()
{
    int input;

    string nama[5] = {};
    int nilai[5] = {};

    cout << "Masukan index kamuh:";
    cin >> input;

    for (int a = 0; a <=input; a ++)
    {
        cout << "masukan nama kalian:";
        cin >> nama [a];
        cout << "Masukann nilai:";
        cin >> nilai [a];

    }

    cout << "======================"<< endl;
    for (int a = 0; a <=input; a++)
    {
        cout << "nama kalian adalah: " << nama[a] << endl;
        cout << "nilai kalian adalah"
         << nilai [a] << endl;
    }
}
