#include <stdio.h>

int main() {
    int x, y, energy, dorayaki, count;
    x = 0; y = 0; energy = 0; dorayaki = 0; count = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    count = x/y;
    energy = count * 10;
    printf("%d\n",energy);
    int i = 0;
    while (dorayaki < energy) {
        i++;
        dorayaki = 130 * i;
    }
    printf("%d",i);
}