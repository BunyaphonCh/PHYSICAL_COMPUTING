#include <stdio.h>

int main()
{
	int amount;
       	float price, percent, discount, buy2get1;
	scanf("%f %f %d", &price, &percent, &amount);
	discount = price * amount * (1 - (percent / 100));
	buy2get1 = price * ((amount/3) * 2 + (amount % 3));
	if (buy2get1 < discount)
	{
		printf("Buy 2 Get 1\n%.2f", buy2get1);
	}
	else
	{
		printf("Discount %.0f%%\n%.2f", percent, discount);
	}
	return 0;
}
