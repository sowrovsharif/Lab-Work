#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter A Number: \n");
    scanf("%d",&num);
    if(num%2==0){
      printf("The Number Is Even\n");
    }
    else{
      printf("The Number Is Odd\n");
    }
}
