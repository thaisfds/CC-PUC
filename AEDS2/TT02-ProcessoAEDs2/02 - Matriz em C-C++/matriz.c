#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int tam;
    int matriz[10][10];
    int somaColuna[10];

    //tamanho da matriz
    scanf("%i",&tam);

    //Preenchimento da matriz
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            scanf("%i", &matriz[i][j]);
        }
    }

    //Soma das colunas
    for(int i=0; i<tam; i++){
        somaColuna[i] = 0;
        for(int j=0; j<tam; j++){
            somaColuna[i] += matriz[j][i];
        }
    }

    //Saida
    for(int i=0; i<tam; i++){
        printf("%i", somaColuna[i]);
    }

}
