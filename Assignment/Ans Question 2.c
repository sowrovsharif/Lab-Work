#include <stdio.h>
int main()
{
    int number,i,sum=0,average;
    printf("Enter 10 Number to Sum and Avarage: \n");

    for(i=1;i<=10;i++){
      scanf("%d",&number);
      sum+=number;
    }
    average=sum/10;
    printf("The Sum Of Ten Number Is : %d\n",sum);
    printf("Average of Sum Of Ten Number is: %d\n",average);
}
