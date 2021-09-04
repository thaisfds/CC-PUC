#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

/*
Cometa - O cometa Halley é um dos cometas de menor período do Sistema Solar,
completando uma volta em torno do Sol a cada 76 anos. Na última ocasião em que ele
tornou-se visível do planeta Terra, em 1986, várias agências espaciais enviaram 
sondas para coletar amostras de sua cauda e assim confirmar teorias sobre suas
composições químicas.
Escreva um programa que, dado o ano atual, determina qual o próximo ano em que o 
cometa Halley será visível novamente do planeta Terra. Se o ano atual é um ano 
de passagem do cometa, considere que ele já passou neste ano, logo, nesse
caso, considere sempre o próximo ano de passagem, não considerando o ano atual.

Entrada: composta por várias linhas, em cada uma temos um ano entre 2020 e 3000. 
A última linha contém apenas um zero
Saída: para cada linha de entrada, escreva um número inteiro indicando o ano 
da próxima passagem
*/

// O primeiro ano em que o cometa passou foi 10dc
//Logo o anoCometa = 10+76(n-1)
// 1986 = 10+76(27-1)
//Precisamos saber quantas vezes o cometa passou antes, logo n = (anoCometa-10)/76

int main(){
    int anoAtual, anoCometa, n;

    scanf("%i", &anoAtual); //pega o ano atual

    while(anoAtual != 0){
        
        n = (anoAtual-10)/76; //descobre quantas vezes o cometa ja passou
        n++; //incrementa o n para saber o numero da proxima vez
        anoCometa = 10+(76*n); //descobre o ano do proximo cometa

        printf("%i\n", anoCometa); //printa o ano

        scanf("%i", &anoAtual); //pega o ano atual
    }    

    return 0;
}