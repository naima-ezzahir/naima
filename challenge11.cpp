#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{


srand(time(NULL));
int randomchoice = (rand()%7)+1;
printf("entrer randomchoice  ");
scanf("%d",&randomchoice);
 switch(randomchoice){
 case (1):
    printf("lun");
       break;
          case (2):
    printf("mar");
          break;
             case (3):
    printf("mer");
          break;
           case (4):
    printf("jeud");

          break;

            case (5):
    printf("vend");
          break;

            case (6):
    printf("sam");
          break;

            case (7):
    printf("dem");
          break;
 }

            return 0;
 }

