#include <stdio.h>
#include<math.h>
int main()
{
    int j,flag,number;
    printf("Enter a Number To Check Prime or Not: \n");
    scanf("%d",&number);
      flag=0;
      if(number==0||number==1){
        printf("%d is Not A Prime Number\n",number);
      }
      else{
      for(j=2;j<=sqrt(number);j++){
        if(number%j==0){
          flag=0;
          break;
        }
        else{
          flag=1;
        }
      }
      if(flag==1){
        printf("%d is a Prime Number\n",number);
      }
      else{
        printf("%d is Not a Prime Number\n",number);
      }
     }


}
