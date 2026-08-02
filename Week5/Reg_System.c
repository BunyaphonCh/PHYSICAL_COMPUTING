#include <stdio.h>

int main() {
  int age, i, sum_age=0, condi1=0, condi2=0, condi3=0, condi4=0;
  float height, weight, sum_height=0, sum_weight=0;
  for (i=0; i<50; i++) {
    scanf("%d %f %f", &age, &height, &weight);
    if (age >= 20 && height >= 160) {
      condi1 = condi1 + 1;
    }
    if (age < 20 && (height <= 180 || weight >= 60)) {
      condi2 = condi2 + 1;
    }
    if (age >= 30 && (weight >= 40 && weight <= 80)) {
      condi3 = condi3 + 1;
    }
    if (age < 40 && (weight < 85 || height <= 200)) {
      condi4 = condi4 + 1;
    }
    sum_age = sum_age + age;
    sum_height = sum_height + height;
    sum_weight = sum_weight + weight;
  }
  printf("Age >= 20 and Height >= 160: %d\n", condi1);
  printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", condi2);
  printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", condi3);
  printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", condi4);
  printf("Average Age: %d\n", sum_age/50);
  printf("Average Height: %.2f\n", sum_height/50);
  printf("Average Weight: %.2f", sum_weight/50);
  return 0;
}
