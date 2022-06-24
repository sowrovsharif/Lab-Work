//21.Write a program in c to find the number and and sum of all integer between 100 to 200 which are divisible by 9.
#include <stdio.h>
int main()
{
    int sum=0,i;
    for(i=100;i<=200;i++){
      if(i%9==0) sum+=i;
    }
    printf("Addition 100 to 200 which are divisible by 9 : %d\n",sum);
}