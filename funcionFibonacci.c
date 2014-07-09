#include <stdio.h>

 int fibonacci(int n){
   if(n>2){
     
     return fibonacci(n-1)+fibonacci(n-2);
    }
    else if(n==2){
      
      return 1;
    }  
    else if (n==1){
      
      return 1;
    }
    else if (n==0){
      
      return 0;
    }
  }

 int main (){
  int a,b;
 printf ("Ingresa un numero:");
 scanf ("%d",& a);
 printf("\n");
printf("Fibonacci \n");
 for(b=0;b<=a;b++){
 printf("%d",fibonacci(b));
 }
 printf("\n");
 return 0;
}
