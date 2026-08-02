#include <stdio.h>

int main() {
	double t1, t2, t3;
	char n1[50], n2[50], n3[50];
	scanf("%lf %[^\n] %lf %[^\n] %lf %[^\n]", &t1, n1, &t2, n2, &t3, n3);
	if (t1 <= t2 && t1 <= t3 ) {
	  printf("%s is Fastest : %.3f", n1, t1);
  }
  else if (t2 <= t1 && t2 <= t3) {
    printf("%s is Fastest : %.3f", n2, t2);
  }
  else {
    printf("%s is Fastest : %.3f", n3, t3);
  }
  return 0;
}
