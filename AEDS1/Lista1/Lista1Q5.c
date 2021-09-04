#include <stdio.h>
#include <math.h>

int main(void) {
 float lado,perimetro,area,diagonal;

 printf("Digite o valor do lado do quadrado: ");
 scanf("%f",&lado);

 diagonal = lado *sqrt(2);
 perimetro = lado *4;
 area = pow(lado,2);

 printf("\nPerimetro: %g",perimetro);
 printf("\nArea: %g",area);
 printf("\nDiagonal: %g",diagonal);

 return 0;
}