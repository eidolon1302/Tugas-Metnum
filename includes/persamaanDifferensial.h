#ifndef PERSAMAANDIFFERENSIAL_H
#define PERSAMAANDIFFERENSIAL_H

#include <functional>

using Function = std::function<double(double, double)>;

void euler_method(Function f, double x0, double y0, double xn, double h);
void modified_euler_method(Function f, double x0, double y0, double xn, double h);
void runge_kutta_method(Function f, double x0, double y0, double xn, double h);
void run_persamaan_diferensial();

#endif