#include <stdio.h>

int main() {
    double matrix[3][3];
    int scalar = 1;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i==j) {
                if (matrix[i][j] != matrix[0][0]) {
                    scalar = 0;
                }
            }
            else {
                if (matrix[i][j] != 0) {
                    scalar = 0;
                }
            }
        }
    }
    if (scalar == 0) {
        printf("This is not a scalar matrix");
    }
    else {
        printf("This is a scalar matrix");
    }
    return 0;
}
