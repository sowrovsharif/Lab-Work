//9.Write a program in c separate even odd from an different array,
#include <stdio.h>
int main()
{
   int  a[10],b[10],c[10],i,l=0,m=0;
    for(i=0;i<10;i++){
      scanf("%d",&a[i]);
      if(a[i]%2==0) {
        b[l]=a[i];
        l++;
      }
      else{
        c[m]=a[i];
        m++;
      }
    }
    printf("Even Numbers Are\n");
    for(i=0;i<l;i++){
      printf("%d ",b[i]);
    }
    printf("\n");
    printf("Odd Numbers Are\n");
    for(i=0;i<m;i++){
      printf("%d ",c[i]);
    }
}