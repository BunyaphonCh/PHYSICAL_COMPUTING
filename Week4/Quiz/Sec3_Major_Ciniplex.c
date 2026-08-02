#include <stdio.h>

int main() {
	int age, day, price;
	scanf("%d %d", &age, &day);
	if (day == 4) {
		printf("Ticket price: 100 Baht");
	}
	else {
		if (age <= 12) {
			price = 120;
		}
		else if (age <= 59) {
			price = 220;
		}
		else {
			price = 140;
		}
		if (day == 7 || day == 1) {
			price = price + 20;
		}
		printf("Ticket price: %d Baht", price);
	}
	return 0;
}
