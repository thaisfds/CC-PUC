#include <stdio.h>
#include <math.h>

int main(void) {
 float co,ca,hip;

 printf("Caterob Oposto: ");
 scanf("%f",&co);
 printf("\nCateto Adjacente: ");
 scanf("%f",&ca);

 hip = sqrt(pow(ca,2)+pow(co,2));

 printf("\nValor da Hipotenusa: %g",hip);

 return 0;
}