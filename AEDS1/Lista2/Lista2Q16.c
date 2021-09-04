#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
 int num1;
 float lado1, lado2, area1, area2, area3, raio1, raio2;
 printf("Digite um numero: ");
 scanf("%i",&num1);
 if(num1==1 || num1==2){
   printf("Digite o primeiro lado do retangulo: ");
   scanf("%f",&lado1);
   printf("Digite o segundo lado do retangulo: ");
   scanf("%f",&lado2);
   raio1 = sqrt((pow(lado1,2)+pow(lado2,2))/4);
   area1 = M_PI*pow(raio1,2);
   printf("A area do circulo circunscrito a esse retangulo eh %g",area1);
 }else if(num1==3 || num1==4 || num1==5){
   printf("Digite o valor do raio do circulo: ");
   scanf("%f",&raio1);
   area1 = 2*pow(raio1,2);
   printf("A area do quadrado inscrito no circulo eh %g",area1);
 }else{
   printf("Digite o lado do quadrado: ");
   scanf("%f",&lado1);
   raio1 = lado1*sqrt(2)/2;
   area1 = M_PI*pow(raio1,2);
   raio2 = lado1/2;
   area2 = M_PI*pow(raio2,2);
   area3 = area1 - area2;
   printf("A area da coroa circular eh %g",area3);
   }
  return 0;
}