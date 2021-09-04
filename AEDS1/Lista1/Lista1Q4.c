#include <stdio.h>
#include <math.h>

int main(void) {
 float raio, perimetro, area;
 printf("Digite o valor do raio: ");
 scanf("%f", &raio);
 perimetro = 2*M_PI*raio;
 area = M_PI*pow(raio,2);
 printf("\nPerimetro: %g", perimetro);
 printf("\nArea: %g", area);
 return 0;
}