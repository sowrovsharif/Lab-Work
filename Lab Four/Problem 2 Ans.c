#include <stdio.h>
#include <math.h>
int main()
{
    int fact=1,prime,choice,num;
    int flag=0;
    printf("Enter 1 to know Even Or Odd\n");
    printf("Enter 2 to Know Number Is prime\n");
    printf("Enter 3 to know Number is Factorial\n");
    printf("Enter 4 to Exit\n");
    printf("Enter A Number to Choice: \n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        scanf("%d",&num);
        if(num%2==0) printf("Even");
        else printf("Odd");
        break;
      case 2:
        scanf("%d",&prime);
        if(prime==1 || prime==2){
           printf("Number is Not Prime");
           break;
        }

        for(int i=3;i<=sqrt(prime);i++){
          if(prime%i==0){
            flag=1;
            break;
          }

        }
        if(flag==0) printf("Number Is Prime");
        else printf("Number is Not Prime");
        break;
      case 3:
        scanf("%d",&num);
        for(int i=num;i>0;i--){
          fact*=i;
        }
        printf("%d",fact);
        break;
      case 4:
        printf("Exit...");
        break;
      default:
        printf("Invalid Number");
    }

}
