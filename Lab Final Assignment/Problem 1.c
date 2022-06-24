//1.Write a program in c to store element in an array and print it.
#include <stdio.h>
int main()
{
  int arr[10];
    for(int i=0;i<10;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
      printf("%d ",arr[i]);
    }
}