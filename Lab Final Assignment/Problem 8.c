//8.Write a program in c to find the maximum and the minimum element of an array.
#include <stdio.h>
int main()
{

  int arr[10],max,min;
  printf("Enter Five Element\n");
  for(int i=0;i<5;i++) scanf("%d",&arr[i]);
  max=arr[0];
  for(int i=1;i<5;i++){
    if(max<arr[i]) max = arr[i];
  }
  min=arr[0];
  for(int i=1;i<5;i++){
    if(min>arr[i]) min = arr[i];
  }

  printf("Max Number Is : %d\n",max);
  printf("Min Number Is : %d\n",min);

}