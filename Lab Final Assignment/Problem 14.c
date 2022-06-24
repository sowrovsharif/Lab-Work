//14.Write a program in c find second largest Number from an array.
#include <stdio.h>
int main()
{

  int arr[10],temp,flag=0;
  for(int i=0;i<5;i++) scanf("%d",&arr[i]);

  for(int i=0;i<4;i++){
    for(int j=0;j<4-i;j++){
      if(arr[j]<arr[j+1]){
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;

      }
    }
  }

  for(int i=0;i<5;i++){
    if(arr[0]>arr[i]){
      printf("Second Largest Element Is : %d\n",arr[i]);
      break;
    }
    else{
      flag=0;
    }
  }
  if (flag) printf("All Element are Same\n");

}