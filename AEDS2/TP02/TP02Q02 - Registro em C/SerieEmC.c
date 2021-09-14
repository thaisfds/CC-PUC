#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

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

void setNome(char *nome, serie *s){
    strcpy(s->nome, nome);
}
void setFormato(char *formato, serie *s){
    strcpy(s->formato, formato);
}
void setDuracao(char *duracao, serie *s){
    strcpy(s->duracao, duracao);
}
void setPais(char *pais, serie *s){
    strcpy(s->pais, pais);
}
void setIdioma(char *idioma, serie *s){
    strcpy(s->idioma, idioma);
}
void setEmissora(char *emissora, serie *s){
    strcpy(s->emissora, emissora);
}
void setTransmissao(char *transmissao, serie *s){
    strcpy(s->transmissao, transmissao);
}
void setTemporadas(int temporadas, serie *s){
    s->temporadas = temporadas;
}
void setEpisodios(int episodios, serie *s){
    s->episodios = episodios;
}

char* getNome(serie *s){
    return s->nome;
}
char* getFormato(serie *s){
    return s->formato;
}
char* getDuracao(serie *s){
    return s->duracao;
}
char* getPais(serie *s){
    return s->pais;
}
char* getIdioma(serie *s){
    return s->idioma;
}
char* getEmissora(serie *s){
    return s->emissora;
}
char* getTransmissao(serie *s){
    return s->transmissao;
}
int getTemporadas(serie *s){
    return s->temporadas;
}
int getEpisodios(serie *s){
    return s->episodios;
}

char* removerN(char* old){
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

void imprimir(serie *s){
    printf("%s %s %s %s %s %s %s %i %i\n",removerN(getNome(s)),removerN(getFormato(s)),removerN(getDuracao(s)),removerN(getPais(s)),removerN(getIdioma(s)),removerN(getEmissora(s)),removerN(getTransmissao(s)), getTemporadas(s),getEpisodios(s));
}

char* naoNumero(char* old){
    
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

char* removerTags(char* old){
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

void ler (char link[], serie *s){

    FILE *fp = fopen(link,"r");
    char buf[3000];
    int numero;

    fgets(buf, 3000, fp);
    
    //Pega o nome
    while(strstr(buf,"infobox_v2") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    fgets(buf, 3000, fp);
    setNome(removerTags(buf),s);

    //Pega o formato
    while(strstr(buf,"Formato") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setFormato(removerTags(buf),s);

    //Pega o duracao
    while(strstr(buf,"Duração") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setDuracao(removerTags(buf),s);
    
    //Pega o pais
    while(strstr(buf,"País de origem") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setPais(removerTags(buf),s);
    
    //Pega o idioma
    while(strstr(buf,"Idioma original") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setIdioma(removerTags(buf),s);
    
    //Pega o emissora
    while(strstr(buf,"Emissora de televisão original") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setEmissora(removerTags(buf),s);
    
    //Pega o transmissao
    while(strstr(buf,"Transmissão original") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    setTransmissao(removerTags(buf),s);

    //Pega o temporadas
    while(strstr(buf,"N.º de temporadas") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    numero = atoi(naoNumero(removerTags(buf)));
    setTemporadas(numero,s);

    //Pega o episódios
    while(strstr(buf,"N.º de episódios") == NULL){
        fgets(buf, 3000, fp);
    }
    fgets(buf, 3000, fp);
    numero = atoi(naoNumero(removerTags(buf)));
    setEpisodios(numero,s);

   fclose(fp);
}

//verifica se chegou no fim
bool isFim(char frase[]){
    return(strlen(frase)==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M');
}

int main(){
    //char link1 [50] = "/home/thais/tmp_teste/series/";
    char link1 [50] = "/tmp/series/";
    char link [100] = "";
    char html [50];
    scanf(" %[^\n]s",html);
    serie *s = (serie*)malloc(20*sizeof(serie));

    while(isFim(html) == false){
        strcpy(link,link1);
        strcat(link,html);
        ler(link,s);
        imprimir(s);
        scanf(" %[^\n]s",html);
    }

    free(s);
}