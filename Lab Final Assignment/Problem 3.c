//3.Write a program in c to find the sum of all elements in the array. 
#include <stdio.h>
int main()
{
  int n;
  
  int arr[10],sum=0;
    for(int i=0;i<10;i++){
      scanf("%d",&arr[i]);
      sum+=arr[i];
    }
    printf("Sum Of all Elements : %d\n",sum);
}