#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

float mediaAluno(float nota[],int n){
  float media=0;
  for(int i=0;i<n;i++){
    media+=nota[i];
  }
return (media/n);
}

float mediaTurma(int media,int n){
  media /=n;
return media;
}

int main(void) {

  int numA,numP;
  char nome[100];
  float nota[100],Pmedia,mediaA,mediaT,prova,porcentagem;

  printf("\nDigite o numero de alunos: ");
  scanf("%i",&numA);
  printf("\nDigite o numero de provas: ");
  scanf("%i",&numP);
  printf("\nQuantos pontos as provas valem: ");
  scanf("%f",&prova);

  for(int i=0;i<numA;i++){
    printf("\n=================================================================: ");
    printf("\nNome do aluno %i: ",i);
    scanf("%s",&nome);

    for(int j=0;j<numP;j++){
      printf("\nNota %i do aluno %i: ",j,i);
      scanf("%f",&nota[j]);
    }
    
    mediaA = mediaAluno(nota,numP);
    printf("\nA media do aluno %s eh %g",nome,mediaA);
    porcentagem = mediaA/prova*100;
    if(porcentagem>=80){printf("\nO aluno %s obteve %.1f %% da nota",nome,porcentagem);}
    mediaT+=mediaA;
  }

  printf("\n=================================================================: ");
  mediaT = mediaTurma(mediaT,numP);
  printf("\nA media da turma eh %g",mediaT);

  return 0;
}