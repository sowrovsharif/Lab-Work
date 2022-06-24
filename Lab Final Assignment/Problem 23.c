//23.Write a program in c to find factorial of that number. 
#include <stdio.h>
int main()
{
  int fact,sum=1;
  printf("Enter Number To Know Factial Value\n");
  scanf("%d",&fact);
  for(int i=fact;i>0;i--){
    sum*=i;
  }
  printf("The Factorial Value is: %d",sum);

}