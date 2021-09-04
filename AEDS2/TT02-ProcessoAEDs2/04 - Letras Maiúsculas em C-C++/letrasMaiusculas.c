#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//verifica se a letra 'e maiuscula
bool isMaiuscula(char letra){
    return(letra >= 'A' && letra <= 'Z');
}

//verifica se chegou no fim
bool isFim(char frase[]){
    return(strlen(frase)==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M');
}

//conta as letras maiusculas
int contarLetrasMaiusculas(char frase[]){
    int resposta = 0;
    for(int i=0; i<strlen(frase);i++){
        if(isMaiuscula(frase[i])==true){resposta++;}
    }
    return resposta;
}

//principal
int main(){
    char frase[1000];
    int resposta;

    scanf(" %[^\n]s",frase);

    while(isFim(frase) == false){
        resposta = contarLetrasMaiusculas(frase);
        printf("%i \n",resposta);
        scanf(" %[^\n]s",frase);
    }

}