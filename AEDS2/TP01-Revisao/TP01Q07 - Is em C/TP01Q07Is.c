#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

//utilizei como base a tabela ascii para verificar o tipo dos carecteres
//letra > 64 && letra < 91 -> são todas as letras maiusculas
//letra > 47 && letra < 58 -> são todos os numeros de 0 a 9

//verifica se chegou no fim
bool isFim(char frase[]){
    return(strlen(frase)==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M');
}

//verifica se é composta apenas por vogais
bool isVogal(char frase[],int tam){
    char letra; 
    bool simNao = false;
    for(int i=0; i<tam;i++){
        letra = toupper(frase[i]); //pega um unico caracter e o coloca como letra maiuscula

        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            simNao = true; // se for uma vogal retorna true
        }
        else{
            simNao = false; // se não for uma vogal retorna false
            i = tam; //fecha a condição fazendo i valer o tamanho da frase
        }
    }
    return simNao;
}

//verifica se é composta apenas por consoantes
bool isConsoante(char frase[],int tam){
    char letra; 
    bool simNao = false;
    for(int i=0; i<tam;i++){
        letra = toupper(frase[i]); //pega um unico caracter e o coloca como letra maiuscula
        if(letra > 64 && letra < 91){
            if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
                simNao = false; // se não for uma consoante retorna false
                i = tam; //fecha a condição fazendo i valer o tamanho da frase
            }
            else{
                simNao = true; // se for uma consoante retorna true
            }
        }
    }
    return simNao;
}

bool isInt(char frase[],int tam){
    char letra; 
    bool simNao = false;
    for(int i=0; i<tam;i++){
        letra = frase[i];
        if(letra > 47 && letra < 58){
            simNao = true; // se for um numero retorna true
        }
        else{
            simNao = false; // se não for um numero retorna false
            i = tam; //fecha a condição fazendo i valer o tamanho da frase
        }
    }
    return simNao;
}

bool isFloat(char frase[],int tam){
    char letra; 
    bool simNao = false;
    int count = 0;
    for(int i=0; i<tam;i++){
        letra = frase[i];
        if(letra > 47 && letra < 58 || letra == 44 || letra == 46){
            simNao = true; // se for um numero ou (,) ou (.) retorna true
            if(letra == 44 || letra == 46){count++;}
            if(count>1){
                simNao = false; // se possuir mias de uma (,) ou (.) retorna false
                i = tam; //fecha a condição fazendo i valer o tamanho da frase
            }
        }
        else{
            simNao = false; // se não for um numero ou (,) ou (.) retorna false
            i = tam; //fecha a condição fazendo i valer o tamanho da frase
        }
    }
    return simNao;
}

//Loop principal
int main(){
    char frase[1000];
    int i, tam, count = 0;
    //i = posiçao inicial
    //tam = posiçao final
    //comp = variavel de comparaçao

    scanf(" %[^\n]s",frase); // pega a entrada

    //while verifica se chegou no final do pub.in

    while(isFim(frase) == false){
        i = 0;
        tam = strlen(frase); //define o tamanho
        if(isVogal(frase, tam)==true){printf("SIM ");}
        else{printf("NAO ");}
        if(isConsoante(frase, tam)==true){printf("SIM ");}
        else{printf("NAO ");}
        if(isInt(frase, tam)==true){printf("SIM ");}
        else{printf("NAO ");}
        if(isFloat(frase, tam)==true){printf("SIM ");}
        else{printf("NAO ");}

        printf("\n");
        

        scanf(" %[^\n]s",frase);
    }

    return 0;
}