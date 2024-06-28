#include "integrasiNumerik.h"
#include <cmath>
#include <functional>

NumericalIntegration::NumericalIntegration(std::function<double(double)> func, double a, double b, int n) 
    : func(func), a(a), b(b), n(n) {}

double NumericalIntegration::integrate() {
    double h = (b - a) / n;
    double sum = 0.5 * (func(a) + func(b));
    
    for (int i = 1; i < n; ++i) {
        sum += func(a + i * h);
    }
    
    return sum * h;
}