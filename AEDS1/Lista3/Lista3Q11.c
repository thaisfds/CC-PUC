#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(void) {
  int n;
  int soma = -1;
  printf("\nDigite o numero de elementos a serem mostrados: ");
  scanf("%i",&n);
  printf("\n");
  for(int i=0;i<n;i++){
    soma += 2;
    if((soma%3==0 && soma%5==0)||(soma%7==0)){
      printf("%i\t",soma);
    }
  }
  return 0;
}