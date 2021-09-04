#include <stdio.h>
#include <stdlib.h>

//funções
int fatorial(int n){
    if(n<=1){return(1);}
    else{return (n*fatorial(n-1));}
}
int sequenciat(int n){
    int t;
    if(n==1){t = 2;}
    else if(n==2){t = 3;}
    else{t = (5*n)+pow(sequenciat(n-1),n);}
    return(t);
}
int somatorio(int n){
    if(n==0){return (0);}
    else{return (n+somatorio(n-1));}
}
void decbin(int n){
    if(n/2 != 0){decbin(n/2);}
    printf("%i",n%2);
}
int mult(int n, int m){
    if(m==1){return(n);}
    else{return(n+mult(n,m-1));}
}
int mdc(int n,int m){
    if(m == 0){return n;}
    else{return mdc(m,n%m);}
}
int digitos(int n){
    int i = 1;
    if(n>=10){
        n /= 10;
        i+=digitos(n);
    }
    return i;
}
int primo(int n,int i){
    if(n%i==0 && n!=2){return 0;}
    else if(i>n/2){return 1;}
    else{return(n,i+1);}
}


//questão
void ex1(){
    int n;
    printf("\nDigite o numero: ");
    scanf("%i",&n);
    printf("Fatorial de %i eh %i",n,fatorial(n));
}
void ex2(){
    int n;
    printf("\nDigite um numero: ");
    scanf("%i",&n);
    printf("O termo %i eh %i",n,sequenciat(n));
}
void ex3(){
    int n;
    printf("\nDigite um numero: ");
    scanf("%i",&n);
    printf("O somatorio de %i eh %i",n,somatorio(n));
}
void ex4(){
    int n;
    printf("\nDigite um numero: ");
    scanf("%i",&n);
    printf("O numero %i em binario eh:",n);
    decbin(n);
}
void ex5(){
    int n,m;
    printf("\nDigite um numero: ");
    scanf("%i",&n);
    printf("Deseja multiplicar por: ");
    scanf("%i",&m);
    printf("A multiplicacao de %i por %i eh %i",n,m,mult(n,m));   
}
void ex6(){
    int n,m;
    printf("\nDigite o primeiro numero: ");
    scanf("%i",&n);
    printf("Digite o segundo numero: ");
    scanf("%i",&m);
    printf("O MDC de %i e %i eh %i",n,m,mdc(n,m));    
}
void ex7(){
    int n;
    printf("\nDigite um numero: ");
    scanf("%i",&n);
    printf("O numero %i tem %i digitos",n,digitos(n)); 
}
void ex8(){
    int n;
    printf("\nDigite um numero: ");
    scanf("%i",&n);
    if(primo(n,2) == 1){printf("O numero %i eh primo",n);}
    else{printf("O numero %i nao eh primo",n);} 
}

//menu
void main(){
    int q;
    printf("==========Menu=========");
    printf("\n->(1) Fatorial");
    printf("\n->(2) T(n)");
    printf("\n->(3) Somatorio");
    printf("\n->(4) Natural para Binario");
    printf("\n->(5) Multiplicacao");
    printf("\n->(6) MDC");
    printf("\n->(7) Numero de Digitos");
    printf("\n->(8) Numero Primo ou Nao");
    printf("\nDigite o exercicio: ");
    scanf("%i",&q);

    if(q==1){ex1();} 
    else if(q==2){ex2();}
    else if(q==3){ex3();}
    else if(q==4){ex4();}
    else if(q==5){ex5();}
    else if(q==6){ex6();}
    else if(q==7){ex7();}
    else if(q==8){ex8();}
}