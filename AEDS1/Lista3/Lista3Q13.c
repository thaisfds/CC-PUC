#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  char letra;
  printf("\nEntre com a letra: ");
  scanf("%c",&letra);
  if(islower(letra)>0){printf("\nminuscula");} //letra minuscula
  else if(isupper(letra)>0){printf("\nMaiuscula");} //letra MAIUSCULA
  else if(isdigit(letra)>0){printf("\nDigito");} //digito
  else{printf("\nOutro caractere");} // outro caractere
  return 0;
}