#include <stdio.h>

int main() {
    char name[31], last[31];
    char id[9];
    int d, m, y;
    float gpa;
    scanf("%s %s %s %d/%d/%d %f", name, last, id, &d, &m, &y, &gpa);
    printf("Fullname: %s %s\nID: %s\nDOB: %02d-%02d-%04d\nGPA: %.2f", name, last, id, d, m, y, gpa);
    return 0;
}