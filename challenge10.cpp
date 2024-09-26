#include <iostream>

using namespace std;

int main()
{

int j;
 int m;
 int an;
 printf(" entrer  jour: ");
 scanf("%d",&j);
 printf(" entrer  mois: ");
 scanf("%d",&m);
 printf(" entrer anne: ");
 scanf("%d",&an);
 switch(m){
 case (1):
    printf("%d-janvier-%d",an,j);
       break;
          case (2):
    printf("%d-fevrier-%d",an,j);
          break;
             case (3):
    printf("%d-mar-%d",an,j);
          break;
           case (4):
    printf("%d-averil-%d",an,j);

          break;

            case (5):
    printf("%d-mai-%d",an,j);
          break;

            case (6):
    printf("%d-juin-%d",an ,j);
          break;

            case (7):
    printf("%d-juillet-%d",an,j);
          break;

            case (8):
    printf("%d-out-%d",an,j);
          break;

            case (9):
   printf("%d-sept-%d",an,j);
          break;

            case (10):
    printf("%d-oct-%d",an,j);
          break;

            case (11):
    printf("%d-nov-%d",an,j);
          break;

            case (12):
    printf("%d-des-%d",an,j);
          break;

            default :
                printf("%d",m);
                break;



 }

    return 0;
}
