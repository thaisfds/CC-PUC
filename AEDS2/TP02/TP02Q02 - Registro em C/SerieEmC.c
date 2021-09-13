#include<stdlib.h>
#include<stdio.h>
#include<string.h>


typedef struct serie{
    char nome[50];
    char formato[50];
    char duracao[50];
    char pais[50];
    char idioma[50];
    char emissora[50];
    char transmissao[50];
    int temporadas;
    int episodios;
}serie;

int countGlobal = 0;
serie Series[1000];

void setNome(char newline[]){
    strcpy(Series[countGlobal].nome, newline);
}
void setForamto(char newline[]){
    strcpy(Series[countGlobal].formato, newline);
}
void setDuracao(char newline[]){
    strcpy(Series[countGlobal].duracao, newline);
}
void setPais(char newline[]){
    strcpy(Series[countGlobal].pais, newline);
}
void setIdioma(char newline[]){
    strcpy(Series[countGlobal].idioma, newline);
}
void setEmissora(char newline[]){
    strcpy(Series[countGlobal].emissora, newline);
}
void setTransmissao(char newline[]){
    strcpy(Series[countGlobal].transmissao, newline);
}

char* removerTags(char* old){
    char *newLine = (char*)malloc(sizeof(strlen(old)));
    int i=0, j=0;
    while(i< strlen(old)){
        if(old[i] == '<'){
            i++;
            while(old[i] != '>'){i++;}
        }else{
            newLine[j] = old[i];
            j++;
        }
        i++;
    }
    newLine[j]= '\0';
    return newLine;
}

void ler (char link[]){

    Series[countGlobal];

    FILE *fp = fopen(link,"r");
    char buf[2000];

    fgets(buf, 2000, fp);
    
    //Pega o nome
    while(strstr(buf,"infobox_v2") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    fgets(buf, 2000, fp);
    setNome(removerTags(buf));

    //Pega o formato
    while(strstr(buf,"Formato") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    setForamto(removerTags(buf));

    //Pega o duracao
    while(strstr(buf,"Duração") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    setDuracao(removerTags(buf));

    //Pega o pais
    while(strstr(buf,"País de origem") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    setPais(removerTags(buf));

    //Pega o idioma
    while(strstr(buf,"Idioma original") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    setIdioma(removerTags(buf));

    //Pega o emissora
    while(strstr(buf,"Emissora de televisão original") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    setEmissora(removerTags(buf));

    //Pega o transmissao
    while(strstr(buf,"Transmissão original") == NULL){
        fgets(buf, 2000, fp);
    }
    fgets(buf, 2000, fp);
    setTransmissao(removerTags(buf));
}

int main(){
    char link [50] = "/home/thais/tmp_teste/series/13_Reasons_Why.html";
    ler(link);
    
    
}