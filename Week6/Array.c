#include <stdio.h>

int main() {
  unsigned int num[5];
  int index;
  for (int i=0; i<5; i++) {
    scanf("%u", &num[i]);
  }
  //for (int i=0; i<5; i++) {
  //  printf("%u", num[i]);
  //}

  scanf("%u", &index);
  printf("Value at index %d is %u", index, num[index]);
  return 0;
}
