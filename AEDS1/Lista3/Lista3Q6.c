#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  char mensagem[100];
  int k;
  printf("Entre com a mensagem: ");
  scanf("%[^\n]s",mensagem);
  printf("\nDigite o valor de K para crifamento:");
  scanf("%d",&k);
  printf("\nMensagem antes do crifamento: %s",mensagem);
  for(int i=0;i<strlen(mensagem);i++){
    mensagem[i] = mensagem[i]+k;
  }
  printf("\nMensagem depois do crifamento: %s",mensagem);
  return 0;
}