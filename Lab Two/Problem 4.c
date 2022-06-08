#include <stdio.h>

int main () {
   char str[5];
   int flag=0,i;
   gets(str);
   printf("The Number is: %s\n", str);
   printf("The Reversed Number is: ");
   
   for(i=4;i>=0;i--){
     printf("%d",str[i]-48);
     if(str[i]-48!=str[4-i]-48){
       flag=1;
     }
    
   }
   printf("\n");
   if(flag==0) printf("Reversed Equal");
   else printf("Not");
   return(0);
}