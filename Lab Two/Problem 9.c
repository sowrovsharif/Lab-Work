#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: \n");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
      printf("Numbers Character");
    else if(ch>=65 && ch<=90)
      printf("Uppercase Character");
    else if(ch>=97 && ch<=122)
      printf("Lowercase Character");
    else
      printf("Special Symboils");

}
