#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void){
    int num,i,n;
    int soma = 0;
    printf("\nDigite a quantidade de termos: ");
    scanf("%i", &num);
    for (i=0; i<num; i++){
        printf("\nDigite o numero: ");
        scanf("%i", &n);
        soma += n;
    }
    printf("\n%d",soma);
    return 0;
}