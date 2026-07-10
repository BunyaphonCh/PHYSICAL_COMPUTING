#include <stdio.h>

int main() {
    int n1;
    float f1;
    char c1;
    scanf("%d %f %c", &n1, &f1, &c1);
    float n1_new = (float)n1;
    int f1_new = (int)f1, c1_new = (int)c1;
    printf("%.3f\n%d\n%d", n1_new, f1_new, c1_new);
    return 0;
}