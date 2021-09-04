#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
 float a,b,x;
 printf("Digite o valor de a: ");
 scanf("%f",&a);
 printf("\nDigite o valor de b: ");
 scanf("%f",&b);

 if(a!=0){
   x = -b/a;
   printf("\nA raiz da equacao eh: %g",x);
 }
 else{
   printf("\nEssa equação nao eh do primeiro grau e nao possui uma raiz");
 }

 return 0;
}