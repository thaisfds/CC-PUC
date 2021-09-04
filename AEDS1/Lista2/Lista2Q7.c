#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 float a,b;
 printf("Digite o primeiro valor: ");
 scanf("%f",&a);
 printf("\nDigite o segundo valor: ");
 scanf("%f",&b);

 if(a>b){
   printf("\nO valor %g eh maior",a);
 }
 else if(b>a){
   printf("\nO valor %g eh maior",b);
 }
 else{
   printf("\nOs valores %g e %g sao iguais",a,b);
 }

 return 0;
}