#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//escreve um novo arquivo com base no que foi lido
void newFile(int numero, double d){
    FILE *f1 = fopen("teste.txt", "w"); //abre o arquivo para escrita

    //loop que pega o valor atraves do scanf e adiciona no arquivo com o fprintf
    for (int i = 0; i < numero; i++){
        scanf("%lf", &d); //armazena o valor double em d
        fprintf(f1,"%lf\n", d); //printa d no arquivo
    }
    fclose(f1);//fecha arquivo
} 

//imprime na saida o que esta no arquivo, mas ao contrario
void contrario(int numero, double d){
    FILE *f1 = fopen("teste.txt", "rb"); //abre o arquivo binario para leitura

    int inteiro = 0; //valor inteiro
    int count = numero; //cria um novo contador valendo o mesmo que numero (utilizado no segundo for)

    //for que vai regredindo a posição do arquivo
    for(int i = 0; i < numero; numero--){
        count = numero;
        for(int j = 0; j < count; count--){fscanf(f1, "%lf\n", &d);}//regride o arquivo e salva como double
        inteiro = (int)d; //transforma o double em inteiro
        if(d == (long) d){printf("%d\n", inteiro);}//printa int se for inteiro
        else{printf("%g\n", d);} //printa float se for real
        rewind(f1); //Volta o indicador de posição do fluxo para a posição inicial. Isto é, o começo do arquivo.
    }

    fclose(f1); //fecha o arquivo

} 

int main(void){
    int n;//quantidade de numeros contidos no pub.in
    double d = 0; //valor double real para escrita no arquivo
    scanf("%i",&n); //pega a quantidade de numeros
    newFile(n, d); //cria um novo arquivo
    contrario(n, d); //printa os dados ao contrário
}