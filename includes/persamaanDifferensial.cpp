#include "persamaanDifferensial.h"
#include <cmath>
#include <iostream>
#include <functional>

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