#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
 char letra1,letra2;
 printf("Digite a primeira letra: ");
 scanf("%c",&letra1);
 printf("\nDigite a segunda letra: ");
 scanf(" %c",&letra2);

 if(toupper(letra1)<toupper(letra2)){
   printf("\ncaracteres lidos %c\t%c",letra1,letra2);
 }else{
   printf("\ncaracteres lidos %c\t%c",letra2,letra1);
 }
 return 0;
}