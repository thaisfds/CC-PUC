#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int n,a,b;
  int soma = -1;
  printf("\nDigite o numero de elementos a serem mostrados: ");
  scanf("%i",&n);
  printf("\nDigite o valor de a: ");
  scanf("%i",&a);
  printf("\nDigite o valor de b: ");
  scanf("%i",&b);
  printf("\n");
  for(int i=0;i<n;i++){
    soma += 2;
    if(soma>1 && soma<b){
      printf("%i\t",soma);
    }
  }
  return 0;
}