#include <stdio.h>

int suma(int a, int b){
 return a+b;
}

 int main(){
 int a, b;
 printf ("valor de A:");
 scanf ("%d",& a);
 printf ("valor de B:");
 scanf ("%d",& b);
 printf("la suma es:%d ",suma (a,b));
 printf("\n");
 return 0;
}