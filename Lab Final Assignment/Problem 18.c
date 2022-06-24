//18.Write a program in C display the n terms of odd natural number and their sum.
#include <stdio.h>
int main()
{
    int i,n,sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      if(i%2==1){ 
        printf("%d ",i);
        sum+=i;
      }
    }
    printf("\n");
    printf("Addition of Natural Odd Number %d\n",sum);
}