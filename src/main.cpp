// main.cpp

#include <iostream>
#include <functional>
#include "../includes/differensiasiNumerik.h"

using namespace std;

int main() {
    double x, h;
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai h: ";
    cin >> h;

    // Menggunakan lambda untuk mengubah fungsi menjadi bentuk yang dapat diterima oleh parameter function<double(double)>
    auto f = [](double x) { return fungsi(x); };

    double hasilMaju = selisihMaju(f, x, h);
    double hasilMundur = selisihMundur(f, x, h);
    double hasiltengahan = selisihtengahan(f, x, h);
    
    cout << "Hasil diferensiasi menggunakan metode selisih maju: " << hasilMaju << endl;
    cout << "Hasil diferensiasi menggunakan metode selisih mundur: " << hasilMundur << endl;
    cout << "Hasil diferensiasi menggunakan metode selisih tengahan: " << hasiltengahan << endl;
    
    return 0;
}
