#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
 float num1,num2;
 int div;
 printf("Digite o primeiro numero: ");
 scanf("%f",&num1);
 printf("\nDigite o segundo numero: ");
 scanf(" %f",&num2);
 div = num1/num2;

 if(div!=0){
   printf("\n%d",div);
 }
  return 0;
}