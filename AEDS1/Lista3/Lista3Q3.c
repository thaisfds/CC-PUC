#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int L;
  int fib1 = 1;int fib2 = 1;int i = 0;int soma = 0;
  printf("Digite um numero: ");
  scanf("%i",&L);
  printf("\n");
  while(fib2<L){
    if(i==0){printf("0\t");}
    else if(i==1||i==2){printf("1\t");}
    else{
      soma = fib1 + fib2;                    
      fib1 = fib2;                           
      fib2 = soma;
      printf("%i\t",fib2);
    }
    i++;
  }   

  return 0;
}