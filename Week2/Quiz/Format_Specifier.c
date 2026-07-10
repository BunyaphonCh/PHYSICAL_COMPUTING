#include <stdio.h>

int main() {
    int n1;
    float f1;
    char c1;
    char text[21];
    scanf("%d %f %c %s", &n1, &f1, &c1, text);
    printf("Integer: %d\nFloat: %.3f\nCharacter: %c\nString: %s",  n1, f1, c1, text);
    return 0;
}