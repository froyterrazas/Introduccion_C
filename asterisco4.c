#include <stdio.h>
int main (){
int n=5,i,j=5,k;
for(i=0;i<n; i++){
  for(k=5-i;k<n;k++){
   printf(" "); 
  }
  for(j=5; j>i;j--){
  printf("*"); 

}
   printf ("\n");
}
return 0;
}
