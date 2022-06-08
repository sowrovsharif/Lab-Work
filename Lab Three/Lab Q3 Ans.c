#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,flag;
    for(i=1;i<=300;i+=2){
      flag=0;
      if(i==0||i==1){
        printf("%d is Not A Prime Number\n",i);
        continue;
      }
      else{
      for(j=2;j<sqrt(i);j++){
        if(i%j==0){
          flag=0;
          break;
        }
        else{
          flag=1;
        }
      }
      if(flag==1){
        printf("%d is a Prime Number\n",i);
      }
      else{
        printf("%d is Not a Prime Number\n",i);
      }
     }
    }

}
