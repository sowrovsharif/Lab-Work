#include <stdio.h>
int main()
{
    int arif,fahmid,joy;
    printf("Enter Age Of Arif, Fahmid And Joy: \n");
    scanf("%d%d%d",&arif,&fahmid,&joy);
    if(arif<=fahmid){
      if(fahmid<=joy){
        printf("Arif Is Younger");
      }
      else{
        printf("Joy Is Younger");
      }
    }
    else{
      if(fahmid<=joy){
        printf("Fahmid Is Younger");
      }
      else{
        printf("Joy Is Younger");
      }
    }

}
