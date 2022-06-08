#include <stdio.h>
int main() 
{
    char ch;
    int a,b;
    printf("Enter Sign and Two Number To Calculate: \n");
    scanf("%c",&ch);
    
    switch(ch){
      case '+':
        scanf("%d%d",&a,&b);
        printf("The Addition is: %d",a+b);
        break;
      
      case '-':
        scanf("%d%d",&a,&b);
        printf("The Substraction is: %d",a-b);
        break;
      case '/':
        scanf("%d%d",&a,&b);
        printf("The Division is: %d",a/b);
        break;
      case '*':
        scanf("%d%d",&a,&b);
        printf("The Multiplication is: %d",a*b);
        break;
      }
    
    
    return 0;
}
