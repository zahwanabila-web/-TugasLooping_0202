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

bool cekPrima(int n) {
    if (n <= 1) {
        return false;
    }
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
}

 return true;
}

bool cekFibonacci(int n) {
     if (n < 0){
        return false;
     }

       int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
              return true;
        }
    }
}