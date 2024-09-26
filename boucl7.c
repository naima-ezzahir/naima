#include <stdio.h>
#include <math.h>
int main() {
     int a;
    int c;
    
    printf("entrer un nomber: ");
    scanf(" %d",&a);
    while(0<a){
        c = a%10;
        printf("%d",c);
    a=a/10;} 
     
          
    return 0;
}