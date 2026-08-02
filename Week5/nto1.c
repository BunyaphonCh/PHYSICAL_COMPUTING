#include <stdio.h>

int main() {
	int i, n;
	scanf("%d", &n);
	i = n+1;
	do {
		i--;
		printf("%d ", i);
	} while (i>1);
	return 0;
}
