#ifndef INTEGRASINUMERIK_H
#define INTEGRASINUMERIK_H

#include <functional>

class IntegrasiNumerik {
public:
    IntegrasiNumerik(std::function<double(double)> func, double a, double b, int n);
    double integrate();
    
private:
    std::function<double(double)> func;
    double a;
    double b;
    int n;
};

#endif