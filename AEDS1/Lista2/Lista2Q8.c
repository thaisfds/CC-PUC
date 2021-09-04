#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 float a,b,c;
 printf("Digite o valor do primeiro lado: ");
 scanf("%f",&a);
 printf("\nDigite o valor do segundo lado: ");
 scanf("%f",&b);
 printf("\nDigite o valor do terceiro lado: ");
 scanf("%f",&c);

 if(a==b && b==c && c==a){
   printf("\nO triangulo eh equilatero");
 }
 else if((a==b && a!=c && b!=c) || (b==c && b!=a && c!=a) || (c==a && c!=b && a!=b)){
   printf("\nO triangulo eh isosceles");
 }
 else{
   printf("\nO triangulo eh escaleno");
 }

 return 0;
}