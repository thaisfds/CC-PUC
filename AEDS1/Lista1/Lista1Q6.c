#include <stdio.h>
#include <math.h>

int main(void) {
 float a,b,c,y;

 printf("Digite o valor de a: ");
 scanf("%f", &a);
 printf("Digite o valor de b: ");
 scanf("%f", &b);
 printf("Digite o valor de c: ");
 scanf("%f", &c);

 y =(a+(b/(c+a))+(2*(a-b))+log2(64));

 printf("\nY = %g", y);
 return 0;
}