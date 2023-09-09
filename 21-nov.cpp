#include <iostream>
//Fungsinya untuk memasukan fungsi

int main ()
{
    //untuk menampilkan teks menggunakan cout
    // << disebut dengan left shift yang fungsinya untuk menanpilkan teks
    // Variable adalah wadah yang menampung sebuah nilai/ data
    //variabel hanya bisa menampung 1 nilai
    
    //Tipe Dataitu ada banyak, salah satunya ada string dan integer (#)
    //String adalah wadah yang menampung sebuah teks dan simbol simbpol lainnya
    //Int adalah sebuah wadah yang khusus untuk menanpung sebuah angka

    std::string namaSaya;

    std::cout << "Masukan nama anda";
    std::cin >> namaSaya;
    std::cout << namaSaya;
}