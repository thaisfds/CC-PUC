#include <stdio.h>
#include <math.h>

int main(void) {
 float razao,a1,a10;

 printf("\nDigite a razao da PA: ");
 scanf("%f",&razao);
 printf("\nDigite o valor do primeiro termo: ");
 scanf("%f",&a1);

 a10 = a1+(9)*razao; //an = a1+(n-1)*r

 printf("O decimo termo eh: %g",a10);

 return 0;
}