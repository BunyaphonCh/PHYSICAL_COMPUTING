#include <stdio.h>
#include <math.h>

int main() {
    int theta, u;
    double g = 9.81;
    double PI = 3.141592653589793;
    
    scanf("%d", &theta);
    scanf("%d", &u);
    
    double radian = (theta * PI) / 180;
    double h = (u*u * sin(radian) * sin(radian)) / (2*g);
    
    printf("theta (degree) : %d\n", theta);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4f", h);
    
    return 0;
}