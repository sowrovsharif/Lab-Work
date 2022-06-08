#include <stdio.h>
#include <string.h>

int main()
{
	int a[5] = { 21, 16, 11, 9, 18 };
	int b[5] = { 22, 9, 7, 18, 10 };
    int c[10];
    printf("The Uniqe Elements Are\n");
	for (int i = 0; i < 5; i++)
	{
		int s = 1;
		for (int j = 0; j < 5; j++)
		{
			if (a[i] == b[j])
			{
				s = 0;
				break;
			}
		}
		if (s) printf("%d ", a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		int s = 1;
		for (int j = 0; j < 5; j++)
		{
			if (b[i] == a[j])
			{
				s = 0;
				break;
			}
		}
		if (s) printf("%d ", b[i]);
	}
	printf("\n");
	//Mergin 2 Array
	for(int i=0;i<5;i++){
        c[i]=a[i];
        c[i+5]=b[i];
	}
	printf("After Mergin The Elements Are\n");
	for(int i=0;i<10;i++) printf("%d ",c[i]);
}
