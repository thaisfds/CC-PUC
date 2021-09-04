#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

/*
Dona Mônica - Dona Mônica é mãe de três filhos que têm idades diferentes. 
Ela notou que, neste ano, a soma das idades dos seus três filhos é igual à idade dela. 
Neste problema, dada a idade de dona Mônica e as idades de dois dos filhos, seu programa 
deve computar e imprimir a idade do filho mais velho. Por exemplo, se sabemos que 
dona Mônica tem 52 anos e as idades conhecidas de dois dos filhos são 14 e 18 anos, 
então a idade do outro filho, que não era conhecida, tem que ser 20 anos, pois a soma 
das três idades tem que ser 52. Portanto, a idade do filho mais velho é 20. 
Em mais um exemplo, se dona Mônica tem 47 anos e as idades de dois dos filhos são 21 e 9 anos,
então o outro filho tem que ter 17 anos e, portanto, a idade do filho mais velho é 21

Entrada: composta por várias linhas, em cada uma temos 3 inteiros sendo a idade de 
Dona Mônica e dos seus dois filhos mais novos. 
A última linha contém apenas um zero

Saída: para cada linha de entrada, escreva um número inteiro indicando a idade 
do filho mais velho

*/

int main(){
    int dona, f1, f2, f3;

    scanf("%i",&dona); // pega a idade da Dona Mônica

    while(dona != 0){
        scanf("%i",&f1); // pega a idade do filho 1
        scanf("%i",&f2); // pega a idade do filho 2

        f3 = dona - (f1+f2); // calcula a idade do filho 3

        printf("%i\n", f3);

        scanf("%i",&dona); // pega a idade da Dona Mônica
    }

    return 0;
}