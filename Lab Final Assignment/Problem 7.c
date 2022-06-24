//7.Write a program in c merge two arrays of same size sorted in decending order.
#include <stdio.h>
int main()
{
  
    int a[5]={1,2,8,4,5};
    int b[5]={6,7,3,9,10};
    int i,c[10],temp,j;
    //Merge Array a and b into c 
    for(i=0;i<5;i++){
      c[i]=a[i];
      c[i+5]=b[i];
    }
    
    for(i=0;i<10;i++){
      printf("%d ",c[i]);
    }
    //Sort Merge Array in decending Order
    for(i=0;i<10;i++){
      for(j=0;j<10-i;j++){
        if(c[j]<c[j+1]){
          temp=c[j+1];
          c[j+1]=c[j];
          c[j]=temp;
          }
       }
    }
    printf("\n");
     for(i=0;i<10;i++){
      printf("%d ",c[i]);
    }
    
}