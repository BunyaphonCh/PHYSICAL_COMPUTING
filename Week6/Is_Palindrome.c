#include <stdio.h>

int main() {
    char text[201];
    int length = 0;

    scanf("%[^\n]", text);

    // หาความยาว string เอง
    while (text[length] != '\0') {
        length++;
    }

    int is_palindrome = 1;   // ตั้งสมมติฐานว่าเป็น Palindrome ไว้ก่อน
    int i = 0;
    int j = length - 1;

    while (i < j) {
        char c1 = text[i];
        char c2 = text[j];

        // แปลงเป็นตัวพิมพ์เล็กก่อนเทียบ (ไม่สนตัวพิมพ์เล็ก-ใหญ่)
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }

        if (c1 != c2) {
            is_palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (is_palindrome == 1) {
        printf("It is Palindrome.");
    }
    else {
        printf("It is not Palindrome.");
    }

    return 0;
}