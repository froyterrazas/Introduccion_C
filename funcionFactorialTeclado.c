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
 int a;
 printf ("Ingresa el numero a calcular su factorial:");
 scanf ("%d",& a);
 printf("\n");
 printf("El factorial del numero es: \n");
 printf("%d",factorial(a));
 printf("\n");
 return 0;
}