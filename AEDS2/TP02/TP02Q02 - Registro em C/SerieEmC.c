#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXTAM 100

//Class Serie
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

serie sArray[1000];
int countGlobal = 0;

void construtor(){
    strcpy(sArray[countGlobal].nome, " ");
    strcpy(sArray[countGlobal].formato , " ");
    strcpy(sArray[countGlobal].duracao , " ");
    strcpy(sArray[countGlobal].pais , " ");
    strcpy(sArray[countGlobal].idioma , " ");
    strcpy(sArray[countGlobal].emissora , " ");
    strcpy(sArray[countGlobal].transmissao , " ");
    sArray[countGlobal].temporadas = 0;
    sArray[countGlobal].episodios = 0;
}

void setNome(char nome[]){
    strcpy(sArray[countGlobal].nome , nome);
}

void setFormato(char formato[]){
    strcpy(sArray[countGlobal].formato , formato);
}

void setDuracao(char duracao[]){
    strcpy(sArray[countGlobal].duracao , duracao);
}

void setPais(char pais[]){
    strcpy(sArray[countGlobal].pais , pais);
}

void setIdioma(char idioma[]){
    strcpy(sArray[countGlobal].idioma , idioma);
}

void setEmissora(char emissora[]){
    strcpy(sArray[countGlobal].emissora , emissora);
}

void setTransmissao(char transmissao[]){
    strcpy(sArray[countGlobal].transmissao , transmissao);
}

void setTemporadas(int temporadas){
    sArray[countGlobal].temporadas = temporadas;
}

void setEpisodios(int episodios){
    sArray[countGlobal].episodios = episodios;
}

char* getNome(){
    return sArray[countGlobal].nome;
}

char* getFormato(){
    return sArray[countGlobal].formato;
}

char* getDuracao(){
    return sArray[countGlobal].duracao;
}

char* getPais(){
    return sArray[countGlobal].pais;
}

char* getIdioma(){
    return sArray[countGlobal].idioma;
}

char* getEmissora(){
    return sArray[countGlobal].emissora;
}

char* getTransmissao(){
    return sArray[countGlobal].transmissao;
}

int getTemporadas(){
    return sArray[countGlobal].temporadas;
}

int getEpisodios(){
    return sArray[countGlobal].episodios;
}

//Tratamento

char* removerN(char old[]){
    char *newLine = (char*)malloc(10*sizeof(strlen(old)));
    int i=0, j=0;
    while(i< strlen(old)){
        if(old[i] == '\n'){
            newLine[j] = ' ';
        }else{
            newLine[j] = old[i];
        }
        j++;
        i++;
    }
    newLine[j]= '\0';
    return newLine;
    free(newLine);
}

char* naoNumero(char old[]){
    
    char *newLine = (char*)malloc(10*sizeof(strlen(old)));
    int i=0, j=0;
    while(i< strlen(old)){
        if(old[i] == '0' || old[i] == '1' || old[i] == '2' || old[i] == '3' || old[i] == '4' || old[i] == '5' || old[i] == '6' || old[i] == '7' || old[i] == '8' || old[i] == '9'){
            newLine[j] = old[i];
            j++;
        }
        i++;
    }
    newLine[j]= '\0';
    return newLine;
    free(newLine);
}

char* removerTags(char old[]){
    char *newLine = (char*)malloc(10*sizeof(strlen(old)));
    int i=0, j=0;
    while(i< strlen(old)){
        if(old[i] == '<'){
            i++;
            while(old[i] != '>'){i++;}
        }else{
            if(old[i] == '&'){
                i+=6;
                if(old[i] == '<'){
                i++;
                while(old[i] != '>'){i++;}
                i++;
                }
            }
            if(old[i] == '<' && old[i+1] == 'a'){
                i++;
                while(old[i] != '>'){i++;} 
            }else{newLine[j] = old[i];}
            j++;
        }
        i++;
    }
    newLine[j]= '\0';
    return newLine;
    free(newLine);
}

void imprimir(){
    //printf("Batataaaaaaa\n");
    printf("%s %s %s %s %s %s %s %i %i\n",removerN(getNome()),removerN(getFormato()),removerN(getDuracao()),removerN(getPais()),removerN(getIdioma()),removerN(getEmissora()),removerN(getTransmissao()), getTemporadas(),getEpisodios());
}

void ler (char link[]){
    //printf("%s\n",link);
    //FILE *fp = fopen(link,"r");
    FILE *fp;

    if((fp = fopen(link, "r")) == NULL){
        printf("Erro ao abrir o arquivo\n");
        abort();
    }
    char buf[3000];
    int numero;

    fgets(buf, 3000, fp);
    //printf("buf = %s\n",buf);

    //Pega o nome
    while(strstr(buf,"infobox_v2") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    fgets(buf, 3000, fp);
    setNome(removerTags(buf));
    //printf("Nome = %s",getNome());

    //Pega o formato
    while(strstr(buf,"Formato") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setFormato(removerTags(buf));

    //Pega o duracao
    while(strstr(buf,"Dura????o") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setDuracao(removerTags(buf));
    
    //Pega o pais
    while(strstr(buf,"Pa??s de origem") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setPais(removerTags(buf));
    
    //Pega o idioma
    while(strstr(buf,"Idioma original") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setIdioma(removerTags(buf));
    
    //Pega o emissora
    while(strstr(buf,"Emissora de televis??o original") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setEmissora(removerTags(buf));
    
    //Pega o transmissao
    while(strstr(buf,"Transmiss??o original") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setTransmissao(removerTags(buf));

    //Pega o temporadas
    while(strstr(buf,"N.?? de temporadas") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    numero = atoi(naoNumero(removerTags(buf)));
    setTemporadas(numero);

    //Pega o epis??dios
    while(strstr(buf,"N.?? de epis??dios") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    numero = atoi(naoNumero(removerTags(buf)));
    setEpisodios(numero);

   fclose(fp);
}

//verifica se chegou no fim
bool isFim(char frase[]){
    return(strlen(frase)==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M');
}

int main(){
    char link1 [50] = "/home/thais/tmp_teste/series/";
    //char link1 [50] = "/tmp/series/";
    char link [100] = "";
    char html [50];
    scanf(" %[^\n]s",html);

    while(isFim(html) == false){
        strcpy(link,link1);
        strcat(link,html);
        ler(link);
        //printf("Nome = %s",getNome());
        imprimir();
        countGlobal++;
        scanf(" %[^\n]s",html);
    }

}