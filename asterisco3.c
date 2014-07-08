#include <stdio.h>
int main (){
int n=5,m,a;
for(n=1;n<=5; n++){
  for(m=5; m>n;m--){
  printf(" "); 
}

for(a=1; a<=n;a++){
  printf("*"); 
}
   printf ("\n");
}
return 0;

}