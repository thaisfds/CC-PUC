#include <stdio.h>
#include <math.h>

int main(void) {
 float razao,a1,a5;

 printf("\nDigite a razao da PG: ");
 scanf("%f",&razao);
 printf("\nDigite o valor do primeiro termo: ");
 scanf("%f",&a1);

 a5 = a1*(pow(razao,4)); //an = a1*q^(n-1)

 printf("O decimo termo eh: %g",a5);

 return 0;
}