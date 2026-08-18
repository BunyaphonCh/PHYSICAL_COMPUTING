#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double arr[n], sum = 0, temp, med, sigma = 0, sd;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int j;
            double temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    if (n % 2 == 0) {
        med = (arr[n/2] + arr[n/2-1]) / 2.0;
    }
    else {
        med = arr[n/2];
    }

    for (int i = 0; i < n; i++) {
        sigma += pow(arr[i] - (sum/n), 2);
    }
    sd = sqrt(sigma / n);
    printf("%.2f\n", sum/n);
    printf("%.2f\n", med);
    printf("%.2f", sd);
}
