#include <stdio.h>

int main() {
    char n[6];
    scanf("%s", n);
    printf("%c", n[0]);
    printf("%81c%c", n[0], n[1]);
    printf("%80c%c%c", n[0], n[1], n[2]);
    printf("%79c%c%c%c", n[0], n[1], n[2], n[3]);
    printf("%78c%c%c%c%c", n[0], n[1], n[2], n[3], n[4]);
    return 0;
}