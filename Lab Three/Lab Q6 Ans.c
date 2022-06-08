#include<stdio.h>
int main()
{
 int a=0,b=1,c,i,number;
 printf("Enter a Number To Show Fibonacci Series: \n");
 scanf("%d",&number);
 printf("%d %d",a,b);
 //Loop Start From 2 Because 0 and 2 Already Printed.
 for(i=2;i<number;i++)
 {
  c = a + b;
  printf(" %d",c);
  a = b;
  b = c;
 }
  return 0;
 }
