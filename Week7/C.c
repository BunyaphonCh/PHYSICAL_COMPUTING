#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    double c = sqrt((a*a) + (b*b));
    
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", a, b, c);
    
    return 0;
}