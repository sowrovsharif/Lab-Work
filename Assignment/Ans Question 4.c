#include <stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++){
      if(i==3){
        continue;
      }
      else{
      for(j=0;j<=i;j++){
         printf("* ");
       }
       printf("\n");
     }

    }
}
