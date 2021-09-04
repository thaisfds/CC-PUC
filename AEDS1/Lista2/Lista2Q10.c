#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 int dia,mes,ano;
 printf("Digite o dia: ");
 scanf("%i",&dia);
 printf("\nDigite o mes: ");
 scanf("%i",&mes);
 printf("\nDigite o ano: ");
 scanf("%i",&ano);

 if((ano%4 == 0 && ano%100!= 0)|| ano%400 == 0){
   printf("\nO ano %i eh bissexto",ano);
 }
 else{
   printf("\nO ano %i nao eh bissexto",ano);
 }
 return 0;
}