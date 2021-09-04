#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 float a1,a2,b1,b2,t1,t2,D,Dx,Dy,x,y;

 printf("Digite o valor de a1: ");
 scanf("%f",&a1);
 printf("\nDigite o valor de b1: ");
 scanf("%f",&b1);
 printf("\nDigite o valor do termo independente 1 (t1): ");
 scanf("%f",&t1);
 printf("\nDigite o valor de a2: ");
 scanf("%f",&a2);
 printf("\nDigite o valor de b2: ");
 scanf("%f",&b2);
 printf("\nDigite o valor do termo independente 2 (t2): ");
 scanf("%f",&t2);
 printf("\nA sua equacao eh:\n{%gx + %gy = %g\n{%gx + %gy = %g",a1,b1,t1,a2,b2,t2);
 D = (a1*b2)-(a2*b1);
 Dx = (t1*b2)-(t2*b1);
 Dy = (a1*t2)-(a2*t1);
 x = Dx/D;
 y = Dy/D;

 //verificaçao de soluçoes
 if(D!=0){
   printf("\nSitema de solucao unica (SPD)");
 }
 else if (D==0){
   if(Dx!=0){printf("\nSistema sem solucao (SI)");}
   else{printf("\nSistema de solucoes infinitas (SPI)");}
 }else{
   printf("\nInvalido");
 }
 return 0;
}