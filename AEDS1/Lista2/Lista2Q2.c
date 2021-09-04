#include <stdio.h>

int main(void) {
 int num1;
 printf("Digite um numero: ");
 scanf("%d",&num1);

 if(num1%7==0){
   printf("\nO numero eh divisivel por 7 ");
 }
 else{
   printf("\nO numero nao eh divisivel por 7 ");
 }

 return 0;
}