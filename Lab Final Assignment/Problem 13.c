//13.Write a program in c to delete a element from a desire position.
#include <stdio.h>
int main()
{
    int i,j,pos,arr[i];
    for(i=0;i<10;i++) scanf("%d",&arr[i]);
    printf("Enter Position To Delete\n");
    scanf("%d",&pos);
    for(i=pos-1;i<10;i++) arr[i]=arr[i+1];
    printf("After Deletation The Array is\n");
    for(i=0;i<9;i++) printf("%d ",arr[i]);
}