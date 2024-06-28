#include "differensiasiNumerik.h"
#include <cmath>
#include <functional>

// Fungsi untuk diferensiasi menggunakan metode selisih maju
double selisihMaju(std::function<double(double)> f, double x, double h) {
    return (f(x + h) - f(x)) / h;
}

// Fungsi untuk diferensiasi menggunakan metode selisih mundur
double selisihMundur(std::function<double(double)> f, double x, double h) {
    return (f(x) - f(x - h)) / h;
}

// fungsi untuk diferensiasi menggunakan metode selisih tengahan
double selisihtengahan(std::function<double(double)> f, double x, double h) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

// Contoh fungsi f(x)
double fungsi(double x) {
    return sin(x);  // Contoh fungsi, f(x) = sin(x)
}