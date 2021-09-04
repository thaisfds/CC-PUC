#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//funções
void printarArquivo(char nome[]){
    FILE *fp = fopen(nome,"r");
    char linha[100];
    printf("\n");
    while(fgets(linha,100,fp) != NULL){
        printf("%s",linha);
    }
    fclose(fp);
}

//questões
void ex1(){
    char NomeArquivo1[20], NomeArquivo2[20], NomeArquivo3[20];
    char linha1[100], linha2[100], linha3[100];
    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s",&NomeArquivo1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s",&NomeArquivo2);
    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s",&NomeArquivo3);
    FILE *fp1 = fopen(NomeArquivo1,"r");
    FILE *fp2 = fopen(NomeArquivo2,"r");
    FILE *fp3 = fopen(NomeArquivo3,"w");

    if(fp1 == NULL || fp2 == NULL || fp3 == NULL){
        printf("Erro na abertura do arquivo\n");
        return -1;
    }
    fgets(linha1,100,fp1);
    fgets(linha2,100,fp2);
    while(!feof(fp1) && !feof(fp2)){
        if(strcmp(linha1,linha2)<0){
            fputs(linha1, fp3);
            fgets(linha1,100,fp1);
        }
        else{
            fputs(linha2, fp3);
            fgets(linha2,100,fp2); 
        }
    }
    if(feof(fp1)){
        while(!feof(fp2)){
            fputs(linha2, fp3);
            fgets(linha2,100,fp2); 
        }
    }

    if(feof(fp2)){
        while(!feof(fp1)){
            fputs(linha1, fp3);
            fgets(linha1,100,fp1); 
        }
    }
    
    memset(linha1,0,100);
    memset(linha2,0,100);
    memset(linha3,0,100);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\nNovo arquivo contendo: \n");
    printarArquivo(NomeArquivo3);

}
void ex2(){
    char NomeArquivo1[20];
    char linha1[100];
    int nPalavras = 1;
    printf("Digite o nome do arquivo: ");
    scanf("%s",&NomeArquivo1);
    FILE *fp1 = fopen(NomeArquivo1,"r");

    if(fp1 == NULL){
        printf("Erro na abertura do arquivo\n");
        return -1;
    }

    while(!feof(fp1)){
        fgets(linha1,100,fp1);
        char *aux = strtok(linha1," ,.;:?!\n\r\t");

        while(aux!= NULL){
            nPalavras++;
            aux = strtok(NULL," ,.;:?!\n\r\t");
        }
    }

    fclose(fp1); //fecha o arquivo
    printf("\nO texto tem %d palavras",nPalavras);
    return 0;

}
void ex3(){
    char NomeArquivo[20];
    char buffer[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s",&NomeArquivo);
    FILE *fp = fopen(NomeArquivo,"r");

    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        return -1;
    }
    int count = 0; 

    while(fgets(buffer,100,fp) != NULL){
        char *aux = strtok(buffer," ,.;:?!\n\r\t");
        while(aux != NULL){
            for(int i = 0; i < strlen(aux);i++){
                count++;
            }
            aux = strtok(NULL," ,.;:?!\n\r\t");
        }
    }

    fclose(fp);
    printf("O arquivo possui %i caracteres.\n",count);
    return 0;

}
void ex4(){
    char NomeArquivo[20];
    char buffer[100], NewBuffer[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s",&NomeArquivo);
    FILE *fp = fopen(NomeArquivo,"r");

    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        return -1;
    }

    memset(NewBuffer,0,100);
    memset(buffer,0,100);

    FILE *newfp = fopen("copia.txt","w");

    while(fgets(buffer,100,fp) != NULL){
        char *aux = strtok(buffer," ,.;:?!\n\r\t");
        while(aux != NULL){
            strcat(NewBuffer,aux);
            strcat(NewBuffer," ");
            aux = strtok(NULL," ,.;:?!\n\r\t");
        }
        strcat(NewBuffer,"\n");
        fprintf(newfp,"%s",NewBuffer);
        memset(NewBuffer,0,100);
        memset(buffer,0,100);
    }

    fclose(fp);
    fclose(newfp);
    printf("Copia do arquivo criado com o nome: 'copia.txt'");
}
void ex5(){
    int NomeArquivo[20];
    float numero, media, max, min;
    int n = 1;
    char padrao[20],linha[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s",&NomeArquivo);
    FILE *fp = fopen(NomeArquivo,"r");
    if(fp == NULL){
        printf("\nErro ao abrir o arquivo.");
        return 1;
    }
    fgets(linha,50,fp);
    char *aux = strtok(linha,"\n\r\t");
    numero = atof (aux);
    media = numero;
    max = numero;
    min = numero;

    while(!feof(fp)){
        n++;
        fgets(linha,50,fp);
        numero = atof (aux);
        aux = strtok(linha,"\n\r\t");
        if(numero > max){max = numero;}
        if(numero < min){min = numero;}
        media += numero;
    }
    media /= n;

    fclose(fp);
    printf("Valor Maximo: %g\n",max);
    printf("Valor Minimo: %g\n",min);
    printf("Media dos Valores: %g\n",media);
    return 0;
}

//menu
void main(){
    system("cls");
    int q;
    printf("==========Menu=========");
    printf("\nDigite o numero da questao:");
    scanf("%i",&q);
    printf("\n");

    if(q==1){ex1();} 
    else if(q==2){ex2();}
    else if(q==3){ex3();}
    else if(q==4){ex4();}
    else if(q==5){ex5();}
}