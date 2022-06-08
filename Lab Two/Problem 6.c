#include <stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Enter Length and Width Of Triangle: \n");
    scanf("%f%f",&length,&width);
    area=length*width*.5;
    perimeter=2*(length+width);
    if(area>perimeter)
      printf("Area Is Greater Than Perimeter");
    else
      printf("Area Is Less Than Perimeter");
}
