#include <iostream>
#include <functional>
#include "../includes/differensiasiNumerik.h"
#include "../includes/integrasiNumerik.h"
#include "../includes/persamaanDifferensial.h"

using namespace std;

int main() {
    int choice;

    std::cout << "Pilih fitur:" << std::endl;
    std::cout << "1: Differensiasi Numerik" << std::endl;
    std::cout << "2: Integrasi Numerik" << std::endl;
    std::cout << "3: Persamaan Diferensial (Metode Euler, Euler termodifikasi, Runge-Kutta)" << std::endl;
    std::cout << "Masukkan pilihan (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            run_differensiasi_numerik();
            break;
        case 2:
            run_integrasi_numerik();
            break;
        case 3:
            run_persamaan_diferensial();
            break;
        default:
            std::cerr << "Pilihan tidak valid!" << std::endl;
            break;
    }

    return 0;
}
