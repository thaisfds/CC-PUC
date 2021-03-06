#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXTAM 1000

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

serie listaSeries[MAXTAM];   // Elementos da pilha 
int n = 0;               // Quantidade de array.

void start(){
    n = 0;
}

void inserirInicio(serie s) {
    int i;

    //validar insercao
    if(n >= MAXTAM){
        printf("Erro ao inserir!");
        exit(1);
    } 

    //levar elementos para o fim do array
    for(i = n; i > 0; i--){
        listaSeries[i] = listaSeries[i-1];
    }
    //printf("INSERINDO %s",s.nome);

    listaSeries[0] = s;
    n++;
}

void inserirFim(serie s) {

    //validar insercao
    if(n >= MAXTAM){
        printf("Erro ao inserir!");
        exit(1);
    }
    //printf("INSERINDO %s",s.nome);
    listaSeries[n] = s;
    n++;
}

void inserir(serie s, int pos) {
    int i;
    //validar insercao
    if(n >= MAXTAM || pos < 0 || pos > n){
        printf("Erro ao inserir!");
        exit(1);
    }

    //levar elementos para o fim do array
    for(i = n; i > pos; i--){
        listaSeries[i] = listaSeries[i-1];
    }
    //printf("INSERINDO %s",s.nome);
    listaSeries[pos] = s;
    n++;
}

serie removerInicio() {
   int i;
   serie resp;

    //validar remocao
    if (n == 0) {
        printf("Erro ao remover!");
        exit(1);
    }

    resp = listaSeries[0];
    n--;

    for(i = 0; i < n; i++){
        listaSeries[i] = listaSeries[i+1];
    }

    return resp;
}

serie removerFim() {

    //validar remocao
    if (n == 0) {
        printf("Erro ao remover!");
        exit(1);
    }

    return listaSeries[--n];
}

serie remover(int pos) {
    int i;
    serie resp;

    //validar remocao
    if (n == 0 || pos < 0 || pos >= n) {
        printf("Erro ao remover!");
        exit(1);
    }

    resp = listaSeries[pos];
    n--;

    for(i = pos; i < n; i++){
        listaSeries[i] = listaSeries[i+1];
    }

    return resp;
}

void mostrar(){
    int i;

    for(i = 0; i < n; i++){
        printf("%s ",removerN(listaSeries[i].nome));
        printf("%s ",removerN(listaSeries[i].formato));
        printf("%s ",removerN(listaSeries[i].duracao));
        printf("%s ",removerN(listaSeries[i].pais));
        printf("%s ",removerN(listaSeries[i].idioma));
        printf("%s ",removerN(listaSeries[i].emissora));
        printf("%s ",removerN(listaSeries[i].transmissao));
        printf("%i ",listaSeries[i].temporadas);
        printf("%i\n",listaSeries[i].episodios);
    }

}

serie pesquisar(char key[]){
    //printf("Key = %s\n",key);
    //char link1 [50] = "/home/thais/tmp_teste/series/";
    char link1 [50] = "/tmp/series/";
    char link [100] = "";

    strcpy(link,link1);
    //printf("link = %s\n",link);
    strcat(link,key);
    //printf("link = %s\n",link);
    ler(link);
    //printf("sArray[countGlobal]= %s\n",sArray[countGlobal].nome);
    return sArray[countGlobal];
}

//Tratamento segunda parte da lista
void tratamento(char entrada[], int tam){
    //printf("Char0 = %c, Char1 = %c, Char2 = %c, Char3 = %c\n",entrada[0],entrada[1],entrada[2],entrada[3]);
    char novaPalavra[tam];
    for(int i=0; i < tam; i++){
        novaPalavra[i] = entrada[i+3];
    }

    int tamI = tam;
    char novaPalavraI[tamI];
    char numeros[2];
    
    if(entrada[0] == 'I'){
        if(entrada[1] == 'I'){inserirInicio(pesquisar(novaPalavra));}
        else if(entrada[1] == 'F'){inserirFim(pesquisar(novaPalavra));}
        else if(entrada[1] == '*'){
            for(int i=0; i < tamI; i++){
                if(i==0 || i==1){numeros[i] = novaPalavra[i];}
                if(i>2){novaPalavraI[i-3] = novaPalavra[i];}
            }
            inserir(pesquisar(novaPalavraI),atoi(numeros));
        }
        countGlobal++;
    }
    else if(entrada[0] == 'R'){
        if(entrada[1] == 'I'){
            printf("(R) %s",listaSeries[0].nome);
            removerInicio();
        }
        else if(entrada[1] == 'F'){
            printf("(R) %s",listaSeries[n-1].nome);
            removerFim();
        }
        else if(entrada[1] == '*'){
            printf("(R) %s",listaSeries[atoi(novaPalavra)].nome);
            remover(atoi(novaPalavra));
        }
    }
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

    //printf("\nIMPRIMINDO\n");
    while(isFim(html) == false){
        strcpy(link,link1);
        strcat(link,html);
        ler(link);
        //printf("Nome = %s",getNome());
        //imprimir();
        inserirFim(sArray[countGlobal]);
        countGlobal++;
        scanf(" %[^\n]s",html);
    }

    int quantidade;
    scanf("%i",&quantidade);
    //printf("\nquantidade = %i\n",quantidade);

    //for (int i = 0; i < countGlobal; i++) {
        //inserirFim(sArray[i]);
    //}

    char entrada[100];
    int tam;

    //printf("\nENTRADAS\n");
    for (int i = 0; i < quantidade; i++) {
        scanf(" %[^\n]s",entrada);
        tam = strlen(entrada)-2;
        tratamento(entrada,tam);
    }


    //printf("\nMOSTRANDO\n");
    mostrar();

}