#include <stdio.h>

int main() {
    char name[101], nickname[51], id[51], firstname[51];
    scanf("%[^\n] %s %s", name, nickname, id);
    sscanf(name, "%s", firstname);
    printf("Hello World, my name is %s (%s)\n\nStudent ID: %s\nName: %s\nNickname: %s", nickname, firstname, id, name, nickname);
    return 0;
}