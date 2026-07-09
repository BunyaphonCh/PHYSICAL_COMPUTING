#include <stdio.h>

int main() {
    char one, two, three, four, five;
    scanf("%c %c %c %c %c", &one, &two, &three, &four, &five);
    int one_n = (int)one, three_n = (int)three, five_n = (int)five;
    printf("%c\n%c\n%c\n%c\n%c", one_n+1, two, three_n+1, four, five_n+1);
    return 0;
}