#include <iostream>
using namespace std;

int angka;
int pilihan;

void tampilkanMenu(){
     cout << "\n=================================\n";
    cout << "       MENU CEK BILANGAN\n";
    cout << "=================================\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Masukkan pilihan: ";
}

void inputAngka() {
    cout << "Masukkan bilangan: ";
    cin >> angka;
}