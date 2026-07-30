#include <stdio.h>
#include <math.h>

int main()
{
	int start, end;
	float v = 1.5, a = 0.5;
	float s_accel, t_accel, s_cruise, t_cruise, t_total, s_total;
	float floor_pos[] = {0, 6, 10, 14, 18, 22};
	scanf("%d %d", &start, &end);
	s_accel = (v*v) / (2*a);
	t_accel = v / a;
	s_total = fabs(floor_pos[end - 1] - floor_pos[start - 1]);
	s_cruise = s_total - (2*s_accel);
	t_cruise = s_cruise / v;
	t_total = (t_accel*2) + t_cruise;
	printf("%.2f", t_total);
	return 0;
}
