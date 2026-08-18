#include <stdio.h>
#include <math.h>

double a, b;

void perimeter() {
    scanf("%lf %lf", &a, &b);
    double c = sqrt(a*a + b*b);
    double p = a + b + c;
    printf("Perimeter: %.2f\n", p);
}

void area() {
    double ar = 0.5 * a * b;
    printf("Area: %.2f\n", ar);
}

int main() {
    perimeter();
    area();
    return 0;
}
