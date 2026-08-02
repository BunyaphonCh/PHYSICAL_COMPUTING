#include <stdio.h>

int main() {
	int m, n, i, round;
	scanf("%d %d", &m, &n);
	if (m > n) {
		round = (m - n)+1;
		for (i=1; i<=round; i++) {
			printf("%d ", m);
			m = m-1;
		}
	}
	else {
		round = (n - m)+1;
                for (i=1; i<=round; i++) {
                        printf("%d ", m);
			m = m+1;
                }
	}
	return 0;
}
