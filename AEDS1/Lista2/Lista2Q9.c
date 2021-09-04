#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 int num1,num2,num3;
 float a,b,c,cosa,cosb,cosc;
 //a é oposto a num1, b é oposto a num2, e c é oposto a num3
 printf("Digite o valor do primeiro lado: ");
 scanf("%i",&num1);
 printf("\nDigite o valor do segundo lado: ");
 scanf("%i",&num2);
 printf("\nDigite o valor do terceiro lado: ");
 scanf("%i",&num3);

 if((abs(num1-num2)<num3 && num3<num1+num2)||(abs(num1-num3)<num2 && num2<num1+num3)||(abs(num2-num3)<num1 && num1<num2+num3)){
   a = (pow(num2,2)+pow(num3,2)-pow(num1,2))/(2*num2*num3);
   b = (pow(num1,2)+pow(num3,2)-pow(num2,2))/(2*num1*num3);
   c = (pow(num1,2)+pow(num2,2)-pow(num3,2))/(2*num1*num2);
   cosa = acosf(a)*180/M_PI;
   cosb = acosf(b)*180/M_PI;
   cosc = acosf(c)*180/M_PI;
   printf("\n%g,%g,%g",cosa,cosb,cosc);
   printf("\n%g,%g,%g",a,b,c);
   printf("\n%i,%i,%i",num1,num2,num3);

   if(cosa==90 || cosb == 90 || cosc == 90){printf("O triangulo eh retangulo");}
   else if(cosa>90 || cosb > 90 || cosc > 90){printf("O triangulo eh obtusangulo");}
   else{printf("O triangulo eh acutangulo");}
 }
 else{
   printf("%d, %d e %d nao podem ser lados de um triangulo\n",num1,num2,num3);
 }

 return 0;
}