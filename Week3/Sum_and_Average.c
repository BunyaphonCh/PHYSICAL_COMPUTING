#include <stdio.h>

int main() {
	float f1, f2, f3, f4, sum, avg;
	scanf("%f %f %f %f", &f1, &f2, &f3, &f4);
	sum = f1 + f2 + f3 + f4;
	avg = sum / 4;
	printf("Summation is %.2f\n", sum);
	printf("Average is %.3f", avg);
	return 0;
}
