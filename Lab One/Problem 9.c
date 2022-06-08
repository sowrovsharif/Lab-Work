#include <stdio.h>

int main()
{
	int sum;
	char num[4];
	printf("Enter the 4 digit number: ");
	scanf("%s", &num);
	printf("Sum of first digit %c &last digit %c is: %d\n", num[0], num[3], num[0] - 48 + num[3] - 48);
	return 0;
}