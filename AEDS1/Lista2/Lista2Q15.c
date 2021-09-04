#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 int num1,num2;
 printf("Digite o numero: ");
 scanf("%i",&num1);

 if(num1 % 2 == 0){
   num2 = pow(num1,2);
   printf("\n%i ao quadrado eh %i",num1,num2);
 }else{
   num2 = pow(num1,3);
   printf("\n%i ao cubo eh %i",num1,num2);
   }
  return 0;
}