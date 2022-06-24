//19.Write a program in C to display n terms of harmonic series and their sum.
#include <stdio.h>
int main()
{
    int i,n;
    float sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      sum += 1/(float) i;
      
    }
    printf("%.2f",sum);
}