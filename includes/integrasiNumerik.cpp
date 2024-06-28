#include "integrasiNumerik.h"
#include <iostream>

double trapezoidal_rule(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));

    for (int i = 1; i < n; ++i) {
        sum += f(a + i * h);
    }

    return sum * h;
}

double simpson_rule(double (*f)(double), double a, double b, int n) {
    if (n % 2 != 0) {
        std::cerr << "n must be even for Simpson's rule" << std::endl;
        return 0;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i += 2) {
        sum += 4 * f(a + i * h);
    }
    for (int i = 2; i < n - 1; i += 2) {
        sum += 2 * f(a + i * h);
    }

    return sum * h / 3;
}

void run_integrasi_numerik() {
    double (*f)(double) = [](double x) { return x * x; }; // Contoh fungsi f(x) = x^2
    double a, b;
    int n;

    std::cout << "Masukkan nilai a: ";
    std::cin >> a;
    std::cout << "Masukkan nilai b: ";
    std::cin >> b;
    std::cout << "Masukkan jumlah segmen n: ";
    std::cin >> n;

    std::cout << "Trapezoidal Rule: " << trapezoidal_rule(f, a, b, n) << std::endl;
    std::cout << "Simpson's Rule: " << simpson_rule(f, a, b, n) << std::endl;
}