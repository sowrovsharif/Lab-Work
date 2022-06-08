#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3, m, n;
    printf("Enter The Points Of X1 And Y1: \n");
    scanf("%f%f",&x1,&y1);
    printf("Enter The Points Of X2 And Y2: \n");
    scanf("%f%f",&x2,&y2);
    printf("Enter The Points Of X3 And Y3: \n");
    scanf("%f%f",&x3,&y3);
    m = (y2 - y1) / (x2 - x1);
    n = (y3 - y2) / (x3 - x2);
    if(m==n){
      printf("Points Falling In same Line\n");
    }
    else{
      printf("Points are not Falling In same Line\n");
    }

}
