#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int n,mult;
  printf("\nDigite o numero de multiplos de 5 desejados: ");
  scanf("%i",&n);
  printf("\n");
  for(int i=1;i<=n;i++){
    mult = i*5;
    printf("%i\t",mult);
  }
  return 0;
}