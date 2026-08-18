#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char letters[26];
    int counts[26];
    int distinct = 0;

    for (int i = 0; i < n; i++) {
        char c;
        scanf(" %c", &c);

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        int found = -1;
        for (int j = 0; j < distinct; j++) {
            if (letters[j] == c) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            letters[distinct] = c;
            counts[distinct] = 1;
            distinct++;
        }
        else {
            counts[found]++;
        }
    }

    for (int i = 0; i < distinct; i++) {
        printf("%c: %d\n", letters[i], counts[i]);
    }

    return 0;
}