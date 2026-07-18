#include <stdio.h>

int main() {
	double price, d, h, volume, ratio;
	scanf("%lf %lf %lf", &price, &d, &h);
	volume = h*3.14159265359*((d/2)*(d/2));
	ratio = price/volume;
	printf("Volume : %.2lfml\n", volume);
	printf("Baht/ml : %.4lf\n", ratio);
	return 0;
}
