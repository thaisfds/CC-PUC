#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//verifica se chegou no fim
bool isFim(char frase[]){
    return(strlen(frase)==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M');
}

bool palindromoRecursivo( char frase[], int tam){
    if (tam <= 1){return true;}
    if (frase[0] != frase[tam-1]){return false;}
    return palindromoRecursivo( frase+1, tam-2);
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

        tam = strlen(frase); //define o tamanho

        if(palindromoRecursivo(frase,tam) == true){printf("SIM\n");}
        else{printf("NAO\n");}

        scanf(" %[^\n]s",frase);
    }

    return 0;
}