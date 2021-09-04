#include <stdio.h>
#include <math.h>

int main(void) {
 float smin,spessoa,nsalarios;

 printf("\nDigite o valor do salario minimo: ");
 scanf("%f",&smin);
 printf("\nDigite o valor do seu salario: ");
 scanf("%f",&spessoa);

 nsalarios = spessoa/smin;
  printf("\nVoce ganha %g salarios minimos",nsalarios);

 return 0;
}