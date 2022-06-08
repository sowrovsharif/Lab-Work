#include <stdio.h>
int main()
{
  int hour,extra;
  printf("Enter 10 Employees Overtime: \n");
  for(int i=1;i<=10;i++){
    scanf("%d",&hour);
    extra=hour-40;
    if(hour>40) printf("Total Paid fot Employee %d is: %d\n",i,extra*12);
    else printf("No Overtime Done By Employee %d\n",i);
  }
}
