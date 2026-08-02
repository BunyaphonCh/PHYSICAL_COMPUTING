#include <stdio.h>

int main() {
	char text;
	scanf("%c", &text);
	if (text == 's' || text == 'S') {
		printf("Soft");
	}
	else if (text == 'm' || text == 'M') {
		printf("Medium");
	}
	else if (text == 'h' || text == 'H') {
		printf("Hard");
	}
	else if (text == 'i' || text == 'I') {
		printf("Intermediate");
	}
	else {
		printf("Wet");
	}
	return 0;
}
