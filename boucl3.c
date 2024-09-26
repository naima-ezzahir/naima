#include <stdio.h>

int main() {
    int n;
   int som =0;
    int i;

    printf("entrer un nomber");
    scanf(" %d",&n);



   for(i=0; i<=n;i++){
       som =som + i;
       printf("%d+%d=%d \n",som+i ,i ,som);
   }
    return 0;
}





