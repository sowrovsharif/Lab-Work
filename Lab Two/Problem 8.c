#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, P;
	float A, S;
	printf("Enter a, b, c three side of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);
	P = a + b + c;
	S = P / 2.0;
	A = sqrt(S *(S - a) *(S - b) *(S - c));
	printf("\nArea of the triangle: %.2f\n", A);
	printf("Perimeter of the triangle: %d\n", P);
	if (A == P)
		printf("Area and Perimeter both are equal.\n");
	else if (A > P)
		printf("Area is greatar than perimeter.\n");
	else
		printf("Perimeter is greater than area.\n");
	return 0;
}