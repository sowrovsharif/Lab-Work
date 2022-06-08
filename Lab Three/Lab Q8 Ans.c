#include <stdio.h>
int main()
{
  //7. Print the following pattern.
    for(int i=1;i<=5;i++){
      for(int j=i;j>0;j--){
        printf("%d ",j);
      }
      printf("\n");
    }
}
