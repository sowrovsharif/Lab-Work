//4.Write a program in c to copy th elements from one array to another array.
#include <stdio.h>
int main()
{
  int n;
  
  int arr[10],arr2[10];
    for(int i=0;i<10;i++){
      scanf("%d",&arr[i]);
      arr2[i]=arr[i];
    }
    printf("Elements Of array\n");
    for(int i=0;i<10;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Elements Of Copy array\n");
    for(int i=0;i<10;i++){
      printf("%d ",arr2[i]);
    }
   
}