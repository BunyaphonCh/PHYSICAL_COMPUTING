#include <stdio.h>

int main() {
  char text[101];
  scanf("%[^\n]", text);
  unsigned int n;
  scanf(" %u", &n);
  for (int i=0; i<n; i++) {
    printf("%c", text[i]);
  }
  //text[n] = '\0';
  //printf("%s", text);
  return 0;
}
