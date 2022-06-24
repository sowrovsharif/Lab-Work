//22.Write a program in c to find the sum of series1+11+111+11111...n terms.
#include <stdio.h>
int main()
{
    int sum=0,i,n,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      sum=sum+c;
      // printf("%d ",sum+c);
      c = (c*10)+1;
    }
    printf("%d ",sum);
}