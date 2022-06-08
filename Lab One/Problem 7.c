#include <stdio.h>
int main()
{
   int i;
   char num[5],sum=0;
   gets(num);
   //For Sum 5 Digit
   for(i=0;i<5;i++){
     sum+=num[i]-48;
   }
   printf("%d",sum);
}
