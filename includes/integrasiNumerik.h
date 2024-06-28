#ifndef INTEGRASINUMERIK_H
#define INTEGRASINUMERIK_H

double trapezoidal_rule(double (*f)(double), double a, double b, int n);
double simpson_rule(double (*f)(double), double a, double b, int n);
void run_integrasi_numerik();

#endif