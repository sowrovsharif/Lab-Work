#include <stdio.h>

int main()
{
	float cost_price, sell_price;
	printf("Enter the cost price of an item: ");
	scanf("%f", &cost_price);
	printf("Enter the selling price of an item: ");
	scanf("%f", &sell_price);
	if (sell_price == cost_price)
		printf("No profit, no loss.\n");
	else if (sell_price > cost_price)
		printf("Profit: %.2f\n", sell_price - cost_price);
	else
		printf("Loss: %.2f\n", cost_price - sell_price);
	return 0;
}