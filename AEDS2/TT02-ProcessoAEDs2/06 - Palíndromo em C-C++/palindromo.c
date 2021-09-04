#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//verifica se chegou no fim
bool isFim(char frase[]){
    return(strlen(frase)==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M');
}

//Loop principal
int main(){
    char frase[1000];
    int i, tam, comp;
    //i = posiçao inicial
    //tam = posiçao final
    //comp = variavel de comparaçao

    scanf(" %[^\n]s",frase); // pega a entrada

    //while verifica se chegou no final do pub.in
    while(isFim(frase) == false){
        i = 0;
        tam = strlen(frase); //define o tamanho
        tam--;//define a posição do ultimo elemento
        comp = 0;

        //enquanto a posiçao final for maior ou igual a inicial
        while(tam>=i){
            if(frase[i] != frase[tam]){comp++;} // se difentes da comp++
            i++; tam--; // incrementa o inicial, e decrementa o final
        }

        if(comp == 0){printf("SIM\n");}
        else{printf("NAO\n");}

        scanf(" %[^\n]s",frase);
    }

    return 0;
}