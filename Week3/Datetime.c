#include <stdio.h>

int main() {
	int s_input, d, h, m, s;
	scanf("%d", &s_input);
	printf("%d s", s_input);
	d = s_input/86400;
	s_input %= 86400;
	h = s_input/3600;
	s_input %= 3600;
	m = s_input/60;
	s = s_input%60;
	printf(" = %d d %d h %d m %d s", d, h, m, s);
	return 0;
}
