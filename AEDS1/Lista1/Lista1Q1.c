#include <stdio.h>
#include <math.h>

int main(void) {
 int num,unid,dez,cent,numRev;
 printf("Digite um numero: ");
 scanf("%d",&num);

 cent = num/100; //123/100 = 1
 dez = (num%100)/10; //123%100 = 23/10 = 2
 unid = num%10; //123%10 = 3
 numRev = unid*100 + dez*10 + cent;

 printf("\nO numero reverso eh: %d", numRev);

 return 0;
}