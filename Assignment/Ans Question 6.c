#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,flag;
    printf("The Prime Numbers are 1 To 200 : \n",i);
    for(i=1;i<200;i+=2){
      flag=0;
      //For Test Cases
      //if(i==0||i==1){
      //  printf("%d is Not A Prime Number\n",i);
      //}
      //else{
      for(j=2;j<=sqrt(i);j++){
        if(i%j==0){
          flag=0;
          break;
        }
        else{
          flag=1;
        }
      }
      if(flag==1){
        printf("%d ",i);
      }
     //}
    }

}
