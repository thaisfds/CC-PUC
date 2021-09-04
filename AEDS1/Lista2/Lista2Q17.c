#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
 char letra;
 float raio,lado,altura,area;
 printf("T - Calcula o triangulo incrito");
 printf("\nQ - Calcula o quadrado incrito");
 printf("\nH - Calcula o hexagono incrito\n");
 printf("\nDigite uma letra: ");
 scanf("%c",&letra);
 printf("\nDigite o valor do raio do circulo: ");
 scanf("%f",&raio);
 switch(letra){
   case 'T':
     lado = raio*sqrt(3);
     altura = (lado*sqrt(3))/2;
     area = lado*altura;
     printf("\nA area do triangulo inscrito eh %g",area);
   break;
   case 'Q':
     area = 2*pow(raio,2);
     printf("\nA area do quadrado inscrito eh %g",area);
   break;
   case 'H':
     area = (6*pow(raio,2)*sqrt(3)/4);
     printf("\nA area do hexagono inscrito eh %g",area);
   break;
 }
 return 0;
}