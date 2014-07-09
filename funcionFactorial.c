#include <stdio.h>
 int factorial(int n){
  if(n==0){
    return 1;
    }
    else{
    return n*factorial(n-1);
    }
}

 int main(){
 printf("El factorial del numero es: \n");
 printf("%d",factorial(8));
 printf("\n");
 return 0;
}
