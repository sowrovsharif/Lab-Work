#include <stdio.h>
int main()
{
  float sum=1.0,fsum=0;
  //Sum Of Seven term of factorial series.
  for(int i=1;i<=7;i++){
    for(int j=i;j>0;j--){
       sum*=j;
    }
    fsum+=i/sum;
  }
  printf("The Factorial Sum Of Series is: %.2f\n",fsum);


}
