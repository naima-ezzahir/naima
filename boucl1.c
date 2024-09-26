#include <stdio.h>

int main() {
    int nbr;
    int tab;
    int i;
    printf("entrer un nomber");
    scanf(" %d",&nbr);
   for(i=1; i<=10;i++){
       tab=i*nbr;

       printf("%d*%d=%d \n",nbr,i,tab);

   }
    return 0;
}





