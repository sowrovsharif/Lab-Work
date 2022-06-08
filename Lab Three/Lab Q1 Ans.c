#include <stdio.h>

int main()
{
	int hour, extra;
	for (int i = 0; i < 10; i++)
	{
		printf("Enter the working hour of the employee: ");
		scanf("%d", &hour);
		if (hour > 40)
			printf("Overtime pay of the employee %d Rs.\n", (hour - 40) *12);
		else
			printf("This employ has not done overtime.\n");
	}
	return 0;
}