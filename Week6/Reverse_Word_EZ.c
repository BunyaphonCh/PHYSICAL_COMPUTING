#include <stdio.h>

int main() {
    char text[100];
    int length = 0;
    scanf("%[^\n]", text);
    while (text[length] != '\0') {
        length++;
    }
    int i = 0;
    int j = length - 1;
    while (i<j) {
        char temp = text[i];
        text[i] = text[j];
        text[j] = temp;
        i++;
        j--;
    }
    printf("%s", text);
    return 0;
}
