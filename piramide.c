#include <stdio.h>

int main(){
 
int n, a, b;
printf("Ingrese un numero:");
scanf("%d",&n);

for(a=1; a<=n; a++){

   for(b=1; b<=n-a; b++){
    printf(" "); 
   }

  for(b=1;b<=2*a-1;b++){ 
    printf("*");
   }
    printf("\n" ) ;
 
   }
}