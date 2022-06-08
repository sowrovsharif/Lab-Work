#include <stdio.h>
int main()
{

  int arr[10];
  for(int i=0;i<5;i++) scanf("%d",&arr[i]);
  printf("The Odd Numbers are: \n");
  for(int i=0;i<4;i++){
      if(i%2==1) printf("%d ",i);
  }
}
