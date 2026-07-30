#include <stdio.h>
#include <math.h>

int main() {
	float n1, n2, n3, maxx, minn;
	scanf("%f %f %f", &n1, &n2, &n3);
	maxx = fmax(fmax(n1, n2), n3);
	minn = fmin(fmin(n1, n2), n3);
	printf("%.2f", n1 + n2 + n3 - maxx - minn);
	return 0;
}
