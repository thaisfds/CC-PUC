#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int I;
  float R;
  printf("\nDigite o valor de I: ");
  scanf("%i",&I);
  printf("\nDigite o valor de R: ");
  scanf("%f",&R);
  while(I>10||R<10){
    if(I>10){printf("\nI=%i",I);I--;}
    if(R<10){printf("\nR=%g, I=%i",R,I);R++;}
  }
  return 0;
}