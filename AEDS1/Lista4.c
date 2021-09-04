#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//Funções
int par(int n){
    int soma = 0;
    for(int i=0;i<n;i++){
        soma +=2;
    }
    return soma;
}
void mostraParesEmOrdemDecrescente(int n){
    for(int i=n;i>0;i--){
        printf("%i\t",par(i));
    }
}
double umSobreImpar(int n){
    double den = 1;
    for(int i=0;i<n;i++){
        den+=2;
    }
    return (1/den);
}
double somaUmSobreImpar(int n){
    double soma=0;
    for(int i=1;i<=n;i++){
        soma+=umSobreImpar(i);
    }
    return soma;
}
double parSobreImpar(int n){
    double den = umSobreImpar(n);
    double num = par(n);
    return (num*den);
}
double somaParSobreImpar(int n){
    double soma=0;
    for(int i=1;i<=n;i++){
        soma+=parSobreImpar(i);
    }
    return soma;
}
double parSobreImparVezesX(int n,float x){
    double mult;
    mult = parSobreImpar(n)*pow(x,n);
    return mult;
}
double produtoParSobreImparVezesX(int n,float x){
    double produto=1;
    for(int i=1;i<=n;i++){
        produto*=parSobreImparVezesX(i,x);
    }
    return produto;
}
int fatorial(int n){
    if(n<=1){return(1);}
    else{return (n*fatorial(n-1));}
}
double parSobreImparVezesXFatorial(int n,float x){
    double termo = 0;
    termo = parSobreImparVezesX(n,x)/fatorial(par(n));
    return termo;
}
double somaParSobreImparVezesXFatorial(int n,float x){
    double soma=0;
    for(int i=1;i<=n;i++){
        soma+=parSobreImparVezesXFatorial(i,x);
    }
    return soma;    
}
double OmitirMultiplosDe2(int n,float x){
    double soma=0;
    if(fatorial(n+2)){}
        soma+=parSobreImparVezesXFatorial(n,x);
    return soma;  
}
void MultiplosDe5(int n){
    printf("\n");
    int mult;
    for(int i=1;i<=n;i++){
        mult = i*5;
        printf("%i\t",mult);
    }
}
int fibonacci(int n){
    if(n==1){return(0);}
    if(n == 2 || n == 3){return(1);}
    else{return(fibonacci(n-1) + fibonacci(n-2));}
}
int Maiorfibonacci(int n){
    int i=1; 
    int aux;
    int num = 1;
    while(num<n){
        aux = num;
        num = fibonacci(i);
        i++;
    }
    return(aux);
}

//Exercicios
void exercicio01(){
    int n;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nO termo %i eh %i",n,par(n));
}
void exercicio02(){
    int n;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    mostraParesEmOrdemDecrescente(n);
}
void exercicio03(){
    int n;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nO termo %i eh %g",n,umSobreImpar(n));
}
void exercicio04(){
    int n;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nSomatorio %g",somaUmSobreImpar(n));
}
void exercicio05(){
    int n;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nO termo %i do par sobre impar eh %g",n,parSobreImpar(n));
    printf("\nO somatorio do par sobre impar eh %g",somaParSobreImpar(n));
}
void exercicio06(){
    int n;
    float x;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nDigite o valor de x: ");
    scanf("%f",&x);
    printf("\nO termo %i eh %g",n,parSobreImparVezesX(n,x));
}
void exercicio07(){
    int n;
    float x;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nDigite o valor de x: ");
    scanf("%f",&x);
    printf("\nO produto dos termos eh %lf",produtoParSobreImparVezesX(n,x));
}
void exercicio08(){
    int n;
    printf("\nDigite o numero: ");
    scanf("%i",&n);
    printf("\n%i! eh %i",n,fatorial(n));
}
void exercicio09(){
    int n;
    float x;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nDigite o valor de x: ");
    scanf("%f",&x);
    printf("\nO termo %i eh %g",n,parSobreImparVezesXFatorial(n,x));
}
void exercicio10(){
    int n;
    float x;
    printf("\nDigite o numero do termo (n-esimo termo): ");
    scanf("%i",&n);
    printf("\nDigite o valor de x: ");
    scanf("%f",&x);
    printf("\nO somatorio eh %lf",somaParSobreImparVezesXFatorial(n,x));
}
void exercicio11(){
    printf("\nEsta questao nao fui realizada por conter erros no enunciado");
}
void exercicio12(){
    int n;
    printf("\nDigite um numero: ");
    scanf("%i",&n); 
    MultiplosDe5(n);     
}
void exercicio13(){
    int n;
    printf("\nDigite o numero: ");
    scanf("%i",&n);
    printf("O %i termo de Fibonacci eh %i.\n",n,fibonacci(n));    
}
void exercicio14(){
    int n;
    printf("\nDigite o numero: ");
    scanf("%i",&n);
    printf("O maior termo da sequencia de Fibonacci menor que %i eh %i.\n",n,Maiorfibonacci(n));  
}


//Menu
int main(){
    int questao;
    printf("\nDigite o numero da questao:");
    scanf("%i",&questao);
    if(questao == 1){exercicio01();}
    else if(questao == 2){exercicio02();}
    else if(questao == 3){exercicio03();}
    else if(questao == 4){exercicio04();}
    else if(questao == 5){exercicio05();}
    else if(questao == 6){exercicio06();}
    else if(questao == 7){exercicio07();}
    else if(questao == 8){exercicio08();}
    else if(questao == 9){exercicio09();}
    else if(questao == 10){exercicio10();}
    else if(questao == 11){exercicio11();}
    else if(questao == 12){exercicio12();}
    else if(questao == 13){exercicio13();}
    else if(questao == 14){exercicio14();}
    else{printf("\nEsse exercicio nao existe");}
    printf("\n");
    return 0;
}