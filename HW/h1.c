#include <stdio.h>

double integrate(double (*f)(double x), double a, double b) {
    double dx = 0.0001, sum=0.0;
    for(double x=a; x<b; x+=dx){
        sum += f(x)*dx;
    }
    return sum;
}

double square(double x) {
    return x*x;
}

int main() {
    printf("integrate(square, 0.0, 2.0)=%f\n", integrate(square, 0.0, 2.0));
}
