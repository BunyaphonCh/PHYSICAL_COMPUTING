#include <stdio.h>

int main() {
	char name[101];
	double power, weight, price;
	scanf("%[^\n]", name);
	scanf("\n%lf\n%lf\n%lf", &power, &weight, &price);
	printf("%.4f\n%.4f\n%.2f\n%s", power, weight, price, name);
	return 0;
}
