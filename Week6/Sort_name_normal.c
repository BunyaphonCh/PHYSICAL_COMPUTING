#include <stdio.h>

int main() {
    char firstname[20][31];
    char lastname[20][31];
    char result[20][61];
    for (int i=0; i<20; i++) {
        scanf("%s %s", firstname[i], lastname[i]);
        int len_f = 0, len_l = 0, pos =0;
        while (firstname[i][len_f] != '\0') {
            len_f++;
        }
        while (lastname[i][len_l] != '\0') {
            len_l++;
        }
        for (int j=0; j<len_f; j++) {
            if (j != 0) {
                if (firstname[i][j] >= 'A' && firstname[i][j] <= 'Z') {
                    firstname[i][j] = firstname[i][j] + 32;
                }
            }
            else {
                if (firstname[i][0] >= 'a' && firstname[i][0] <= 'z') {
                    firstname[i][0] = firstname[i][0] - 32;
                }
            }
        }
        for (int j=0; j<len_l; j++) {
            if (j != 0) {
                if (lastname[i][j] >= 'A' && lastname[i][j] <= 'Z') {
                    lastname[i][j] = lastname[i][j] + 32;
                }
            }
            else {
                if (lastname[i][0] >= 'a' && lastname[i][0] <= 'z') {
                    lastname[i][0] = lastname[i][0] - 32;
                }
            }
        }
        for (int k=0; k<len_f; k++) {
            result[i][pos] = firstname[i][k];
            pos++;
        }
        result[i][pos] = ' ';
        pos++;
        for (int l=0; l<len_l; l++) {
            result[i][pos] = lastname[i][l];
            pos++;
        }
        result[i][pos] = '\0';
    }
    int should_swap = 0;
    for (int i=0; i<19; i++) {
        for (int j=0; j<19-i; j++) {
            should_swap = 0;
            int k = 0;
            while (result[j][k] != '\0' && result[j+1][k] != '\0') {
                if (result[j][k] > result[j+1][k]) {
                    should_swap = 1;
                    break;
                } 
                else if (result[j][k] < result[j+1][k]) {
                    break;
                }
                k++;
            }
            if (should_swap == 1) {
                char temp[61];
                int m = 0;
                while (result[j][m] != '\0') {
                    temp[m] = result[j][m];
                    m++;
                }
                temp[m] = '\0';
                m = 0;
                while (result[j+1][m] != '\0') {
                    result[j][m] = result[j+1][m];
                    m++;
                }
                result[j][m] = '\0';
                m = 0;
                while (temp[m] != '\0') {
                    result[j+1][m] = temp[m];
                    m++;
                }
                result[j+1][m] = '\0';
                m = 0;
                while (temp[m] != '\0') {
                    result[j+1][m] = temp[m];
                    m++;
                }
                result[j+1][m] = '\0';
            }
        }
    }
    for (int i=0; i<20; i++) {
        printf("%s\n", result[i]);
    }
    return 0;
}
