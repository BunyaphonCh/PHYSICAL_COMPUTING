#include <stdio.h>

int main() {
    char text[300];
    char find;
    int length = 0;
    int count = 0;
    int positions[300];
    scanf("%[^\n] %c", text, &find);
    while (text[length] != '\0') {
        length++;
    }
    for (int i=0; i<length; i++) {
        char c1 = text[i];
        char c2 = find;
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }
        if (c1 == c2) {
            positions[count] = i + 1;
            count++;
        }
    }
    if (count == 0) {
        printf("Not found.");
    }
    else {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, find);
        printf("Position: ");
        for (int i = 1; i<=count; i++) {
            if (i == count) {
                printf("%d", positions[i-1]);
            }
            else {
                printf("%d, ", positions[i-1]);
            }
        }
    }
    return 0;
}
