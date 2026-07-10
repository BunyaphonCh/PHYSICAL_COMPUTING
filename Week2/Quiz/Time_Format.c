#include <stdio.h>

int main() {
    int hour, min;
    scanf("%d\n%d", &hour, &min);
    if (hour >= 10) {
        if (min >= 10) {
            printf("%d:%d", hour, min);
        }
        else {
            printf("%d:0%d", hour, min);
        }
    }
    else {
        if (min >= 10) {
            printf("0%d:%d", hour, min);
        }
        else {
            printf("0%d:0%d", hour, min);
        }
    }
    return 0;
}