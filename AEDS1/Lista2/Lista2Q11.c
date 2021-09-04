#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
 float num1,num2;
 printf("Digite o primeiro numero: ");
 scanf("%f",&num1);
 printf("\nDigite o segundo numero: ");
 scanf("%f",&num2);
 if(num1>num2){
   printf("\nO maior numero: %g",num1);
   printf("\nO menor numero: %g",num2);
 }else if(num2>num1){
   printf("\nO maior numero: %g",num2);
   printf("\nO menor numero: %g",num1);
 }else{printf("\n%g e %g sao dois numeros iguais",num1,num2);}
 return 0;
}