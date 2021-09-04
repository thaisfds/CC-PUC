#include <stdio.h>
#include <math.h>

int main(void) {
 float dec,num,denom;

 printf("\nDigite o numerador: ");
 scanf("%f",&num);
 printf("\nDigite o denominador: ");
 scanf("%f",&denom);

 dec = num/denom;
  printf("\nO valor em decimal eh: %g",dec);

 return 0;
}