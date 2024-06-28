// differentiation.h

#ifndef DIFFERENSIASINUMERIK_H
#define DIFFERENSIASINUMERIK_H

double forward_difference(double (*f)(double), double x, double h);
double central_difference(double (*f)(double), double x, double h);
void run_differensiasi_numerik();

#endif
