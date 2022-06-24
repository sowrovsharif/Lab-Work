//2.Write a program in c read n number of vales in an array and display it in reverse order.
#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
      printf("%d ",arr[i]);
    }
}