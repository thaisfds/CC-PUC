#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int n,i,soma;
  int fib1 = 1;
  int fib2 = 1;
  printf("Digite o numero do elemento: ");
  scanf("%i",&n);
  printf("\n");
  for (i=0; i<n; i++){
    if(i==0){soma=0;}
    else if(i==1||i==2){soma=1;}
    else{
      soma = fib1 + fib2;                    
      fib1 = fib2;                           
      fib2 = soma;
    }
  }
  printf("O %d termo da sequencia de Fibonacci eh: %d",n,soma);    

  return 0;
}