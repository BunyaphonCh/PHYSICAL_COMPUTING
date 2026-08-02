#include <stdio.h>

int main()
{
	int count = 0, state, round, safety;
	float distance;
	scanf("%d %f %d %d", &state, &distance, &round, &safety);
	if (state != 1) {
		count = count + 1;
	}
	if (round <= 2) {
		count = count + 1;
	}
	if (round - safety < 2) {
		count = count + 1;
	}
	if (distance >= 1) {
		count = count + 1;
	}
	if (count == 0)
	{
		printf("DRS allowed");
	}
	else
	{
		printf("DRS not allowed %d", count);
	}
	return 0;
}
