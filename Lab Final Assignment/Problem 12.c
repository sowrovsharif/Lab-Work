//12.Write a program in c insert new value in the array (Unsorted List).
#include <stdio.h>
int main()
{

  int arr[10],pos,num;
  for(int i=0;i<5;i++) scanf("%d",&arr[i]);
  printf("Enter Position And Element To Insert:  \n");
  scanf("%d %d",&pos,&num);
  for(int i=4;i>=pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]=num;
  printf("After Insertion\n");
  for(int i=0;i<6;i++) printf("%d ",arr[i]);
}