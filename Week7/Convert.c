#include <stdio.h>
#include <string.h>

int main() {
    char str1[102], str2[102];
    
    scanf(" %101[^\n]", str1);
    scanf(" %101[^\n]", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for (int i = 0; i < len1; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - 32;
        }
    }
    
    for (int i = 0; i < len2; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 32;
        }
        else if (str2[i] >= 'a' && str2[i] <= 'z') {
            str2[i] = str2[i] - 32;
        }
    }
    
    printf("*** Results ***\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("***************\n");
    
    if (strcasecmp(str1, str2) == 0) {
        printf("Both strings are the same.");
    }
    else {
        printf("Both strings are not the same.");
    }
    
    return 0;
}