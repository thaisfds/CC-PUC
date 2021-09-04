#include <stdio.h>
#include <math.h>

int main(void) {
 int A,B,C;

 printf("\nDigite o valor de A: ");
 scanf("%d",&A);
 printf("\nDigite o valor de B: ");
 scanf("%d",&B);

 C = A;
 A = B;
 B = C;
  printf("\nNovo valor de A: %d",A);
 printf("\nNovo valor de B: %d",B);

 return 0;
}