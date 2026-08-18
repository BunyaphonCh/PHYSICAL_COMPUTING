#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char names[100000][65];

int compare(const void *a, const void *b) {
    return strcmp((const char*)a, (const char*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf(" %64[^\n]", names[i]);
        
        int len = strlen(names[i]);
        
        int is_start_of_word = 1;
        for (int j = 0; j < len; j++) {
            if (names[i][j] == ' ') {
                is_start_of_word = 1;
                continue;
            }
            
            if (is_start_of_word) {
                if (names[i][j] >= 'a' && names[i][j] <= 'z') {
                    names[i][j] = names[i][j] - 32;
                }
                is_start_of_word = 0;
            }
            else {
                if (names[i][j] >= 'A' && names[i][j] <= 'Z') {
                    names[i][j] = names[i][j] + 32;
                }
            }
        }
    }
    
    qsort(names, n, sizeof(names[0]), compare);
    
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}