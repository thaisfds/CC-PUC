#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 int num1,num2,num3;
 printf("Digite o primeiro lado: ");
 scanf("%d",&num1);
 printf("Digite o segundo lado: ");
 scanf("%d",&num2);
 printf("Digite o terceiro lado: ");
 scanf("%d",&num3);

 if((abs(num1-num2)<num3 && num3<num1+num2)||(abs(num1-num3)<num2 && num2<num1+num3)||(abs(num2-num3)<num1 && num1<num2+num3)){
   printf("%d, %d e %d  podem ser lados de um triangulo\n",num1,num2,num3);
 }
 else{
   printf("%d, %d e %d nao podem ser lados de um triangulo\n",num1,num2,num3);
 }

 return 0;
}