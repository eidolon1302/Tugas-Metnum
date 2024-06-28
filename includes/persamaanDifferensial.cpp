#include "persamaanDifferensial.h"
#include <iostream>

void euler_method(Function f, double x0, double y0, double xn, double h) {
    double n = (xn - x0) / h;
    double x = x0;
    double y = y0;

    std::cout << "Euler Method:" << std::endl;
    for (int i = 0; i <= n; ++i) {
        std::cout << "x: " << x << ", y: " << y << std::endl;
        y = y + h * f(x, y);
        x = x + h;
    }
}

void modified_euler_method(Function f, double x0, double y0, double xn, double h) {
    double n = (xn - x0) / h;
    double x = x0;
    double y = y0;

    std::cout << "Modified Euler Method:" << std::endl;
    for (int i = 0; i <= n; ++i) {
        std::cout << "x: " << x << ", y: " << y << std::endl;
        double k1 = f(x, y);
        double k2 = f(x + h, y + h * k1);
        y = y + h * (k1 + k2) / 2;
        x = x + h;
    }
}

void runge_kutta_method(Function f, double x0, double y0, double xn, double h) {
    double n = (xn - x0) / h;
    double x = x0;
    double y = y0;

    std::cout << "Runge-Kutta Method:" << std::endl;
    for (int i = 0; i <= n; ++i) {
        std::cout << "x: " << x << ", y: " << y << std::endl;
        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2, y + k1 / 2);
        double k3 = h * f(x + h / 2, y + k2 / 2);
        double k4 = h * f(x + h, y + k3);
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;
    }
}

void run_persamaan_diferensial() {
    double x0, y0, xn, h;
    int choice;

    std::cout << "Masukkan nilai awal x0: ";
    std::cin >> x0;
    std::cout << "Masukkan nilai awal y0: ";
    std::cin >> y0;
    std::cout << "Masukkan nilai akhir xn: ";
    std::cin >> xn;
    std::cout << "Masukkan langkah h: ";
    std::cin >> h;

    std::cout << "Pilih metode:" << std::endl;
    std::cout << "1: Euler" << std::endl;
    std::cout << "2: Modified Euler" << std::endl;
    std::cout << "3: Runge-Kutta" << std::endl;
    std::cout << "Masukkan pilihan (1-3): ";
    std::cin >> choice;

    Function f = [](double x, double y) { return x + y; }; // Contoh fungsi f(x, y) = x + y

    switch (choice) {
        case 1:
            euler_method(f, x0, y0, xn, h);
            break;
        case 2:
            modified_euler_method(f, x0, y0, xn, h);
            break;
        case 3:
            runge_kutta_method(f, x0, y0, xn, h);
            break;
        default:
            std::cerr << "Pilihan tidak valid!" << std::endl;
            break;
    }
}