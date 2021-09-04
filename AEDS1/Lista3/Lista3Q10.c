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
    printf("%i\t",soma);
  }
  return 0;
}