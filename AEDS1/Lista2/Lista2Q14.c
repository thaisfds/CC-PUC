#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
 float num1;
 printf("Digite o primeiro numero: ");
 scanf("%f",&num1);

 if(num1 > 0){
   printf("\n%g eh maior que 0",num1);
 }
 else if(num1 < 0){
   printf("\n%g eh menor que 0",num1);
 }
 else{printf("\n%g eh igual a 0",num1);}
  return 0;
}