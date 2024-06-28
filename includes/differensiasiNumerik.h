// differentiation.h

#ifndef DIFFERENSIASINUMERIK_H
#define DIFFERENSIASINUMERIK_H

#include <functional>

// Fungsi untuk diferensiasi menggunakan metode selisih maju
double selisihMaju(std::function<double(double)> f, double x, double h);

// Fungsi untuk diferensiasi menggunakan metode selisih mundur
double selisihMundur(std::function<double(double)> f, double x, double h);

// Fungsi untuk diferensiasi menggunakan metode selisih tengahan
double selisihtengahan(std::function<double(double)> f, double x, double h);

// Contoh fungsi f(x)
double fungsi(double x);

#endif
