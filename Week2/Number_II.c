#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    char sp = ' ';
    scanf("%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5);
    printf("%1d", n1);
    printf("%79c", sp);
    printf("%2d%1d", n1, n2);
    printf("%77c", sp);
    printf("%3d%1d%1d", n1, n2, n3);
    printf("%75c", sp);
    printf("%4d%1d%1d%1d", n1, n2, n3, n4);
    printf("%73c", sp);
    printf("%5d%1d%1d%1d%1d", n1, n2, n3, n4, n5);
    return 0;
}