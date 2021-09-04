#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int ex1(int a1, int razao, int n){
  int resposta = a1 *pow(razao,n-1);
  return resposta;
}

int ex2(int a1, int razao, int n){
  int resposta = 1;
  for(int i=0;i<n-1;i++){
    resposta *= razao;
  }
  return a1*resposta;
}

int ex3(int a1, int razao, int n){
  int resposta = 0; int aux = 1;
  for(int i=0;i<n-1;i++){
    resposta=0;
    for(int j=0;j<razao;j++){
      resposta += aux;
    }
    aux = resposta;
  }
  return a1*resposta;
}


int main(void) {
  int a1,an,n,razao;
  printf("\nDigite a razao da PG: ");
  scanf("%i",&razao);
  printf("\nDigite o primeiro termo da PG: ");
  scanf("%i",&a1);
  printf("\nDigite o numero do elemento a ser calculado na PG: ");
  scanf("%i",&n);

  an = ex1(a1,razao,n);
  printf("\nO termo (%i) eh %i",n,an);
  an = ex2(a1,razao,n);
  printf("\nO termo (%i) eh %i",n,an);
  an = ex3(a1,razao,n);
  printf("\nO termo (%i) eh %i",n,an);

  return 0;
}
