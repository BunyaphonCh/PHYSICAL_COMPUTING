#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	i = n;
	if (i > 0) {
		while(i != -1) {
				printf("%d ", n);
				n = n-1;
				i = i-1;
			}
	}
	else if (i < 0) {
                while(i != 1) {
                        printf("%d ", n); 
                        n = n+1;
                        i = i+1;
                }   
        }
	else {
		printf("0");
	} 
	return 0;
}
