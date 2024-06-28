#include "differensiasiNumerik.h"
#include <iostream>

double forward_difference(double (*f)(double), double x, double h) {
    return (f(x + h) - f(x)) / h;
}

double central_difference(double (*f)(double), double x, double h) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

void run_differensiasi_numerik() {
    double (*f)(double) = [](double x) { return x * x; }; // Contoh fungsi f(x) = x^2
    double x, h;

    std::cout << "Masukkan nilai x: ";
    std::cin >> x;
    std::cout << "Masukkan nilai h: ";
    std::cin >> h;

    std::cout << "Forward Difference: " << forward_difference(f, x, h) << std::endl;
    std::cout << "Central Difference: " << central_difference(f, x, h) << std::endl;
}