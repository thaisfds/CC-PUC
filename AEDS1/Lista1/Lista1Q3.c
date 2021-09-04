#include <stdio.h>
#include <math.h>

int main(void) {
 float base,altura,perimetro,area,diagonal;

 printf("Digite o valor da base do triangulo: ");
 scanf("%f",&base);
 printf("\nDigite o valor da base do triangulo: ");
 scanf("%f",&altura);

 diagonal = sqrt(pow(base,2) + pow(altura,2));
 perimetro = base + altura + diagonal;
 area = base * altura;

 printf("\nPerimetro: %g",perimetro);
 printf("\nArea: %g",area);
 printf("\nDiagonal: %g",diagonal);

 return 0;
}