#include <stdio.h>

int main()
{
	int state, round, safety;
	float distance;
	scanf("%d %f %d %d", &state, &distance, &round, &safety);
	if (state == 1 & safety > 2 & round > 2 & distance < 1)
	{
		printf("DRS allowed");
	}
	else
	{
		printf("DRS not allowed");
	}
	return 0;
}
