#include <stdio.h>

int main() {
    char fname1[20];
    char sname1[20];
    char person2[20];
    char person3[20];
    scanf("%s %s  %[^\n] %[^\n]", fname1, sname1, person2, person3);
    printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s", fname1, sname1, person2, person3);
    return 0;
}