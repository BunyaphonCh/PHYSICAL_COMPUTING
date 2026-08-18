#include <stdio.h>
#include <math.h>

int main() {
    char paperX[5], paperY[5];
    int x, y;
    scanf("%s", paperX);
    scanf("%s", paperY);
    sscanf(paperX, "A%d", &x);
    sscanf(paperY, "A%d", &y);
    int diff = y - x;
    int result = (int) pow(2, diff);
    printf("%d", result);
    return 0;
}