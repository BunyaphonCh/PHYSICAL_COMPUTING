#include <stdio.h>
#include <math.h>

int main() {
	double l1, l2, cal, res;
	scanf("%lf %lf", &l1, &l2);
	cal = pow(l1,2) + pow(l2,2);
	res = sqrt (cal);
	printf("%.2f", res);
	return 0;	
}
