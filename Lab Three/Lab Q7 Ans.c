#include <stdio.h>
int main()
{
  //7. Print the following pattern of pyramid with star.
    for(int i=1;i<=5;i++){
      for(int j=1;j<=i;j++){
        printf("* ");
      }
      printf("\n");
    }
}
