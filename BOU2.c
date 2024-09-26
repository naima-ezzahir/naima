#include <stdio.h>

int main() {
    int n ,fact=1 ,i;

    printf("entrer un nomber");
    scanf(" %d",&n);

    if (n<=n){
        printf(" le fact et positive: \n");
    } else if (n==0){
        printf(" le nomber et facteur: " );
    }

   for(i=1; i<=n;i++){
       fact=fact * i;
       printf("%d*%d=%d \n",fact / i ,i ,fact);
   }
    return 0;
}






