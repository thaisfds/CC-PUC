#include <stdio.h>#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//função
int swap (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
    return 0;
}
int swapmaior (int a, int b, int *x, int *y){
    if(a<b){
        int aux = *x;
        *x = *y;
        *y = aux;
    }
    return 0;
}
int somadobro(int *a, int *b){
    *a *= 2; 
    *b *= 2; 
    return (*a+*b);
}
void soma(int *a, int *b){
    *a = *a+*b;
}
void procedimento(char frase[]){
    for(int i = 0; i<strlen(frase);i++){
        if(frase[i] == 'a'){frase[i] = 'u';}
        else if(frase[i] == 'e'){frase[i] = 'o';}
        else if(frase[i] == 'i'){frase[i] = 'u';}
        else if(frase[i] == 'o'){frase[i] = 'a';}
        else if(frase[i] == 'u'){frase[i] = 'e';}
    }
    printartroca(frase);
}
void printartroca(char frase[]){
    printf("Nova frase: %s\n",frase);
}
void bubblesort(int *num){
    int bubble[3];

    for(int i=0;i<3;i++,num++){bubble[i] = *num;}
    num-=3;

    for(int i=0;i<3;i++){
        for(int j=3;j>0;j--){
            if(bubble[j-1]>bubble[j]){swap(&bubble[j-1],&bubble[j]);}
        }
    }

    for(int i=0;i<3;i++,num++){*num = bubble[i];}
    num-=3;
}
int compstring(char *palavra1, char *palavra2){
    int tam1 = strlen(palavra1);
    int tam2 = strlen(palavra2);
    int i = 0, j = 0, k = 0;
    for(i=0;i<tam1;i++,palavra1++){
        for(j=0;j<tam2;j++,palavra2++){
            if(*palavra1 != *palavra2){break;}
            if(j == tam2-1){return 1;}
            palavra1++;
        } 
        palavra2-=j;

    }
    return 0;
}
void printar(int array[], int len){
    int *parray = array;
    for(int i=0;i<len;i++,parray++){
        printf("%i\t",*parray);
    }
}
int negativos(float *vet, int N){
    int cont = 0;
    for(int i=0;i<N;i++,vet++){
        if(*vet<0){cont++;}
    }
    return cont;
}
void maxmin(int V[], int *max, int *min, int len){
    printf("\nlen = %i",len);

    for (int i=0; i<len;i++){
        if(V[i]>*max){*max = V[i];}
        if(V[i]<*min){*min = V[i];}
    }
}


//questão
void ex1(){
    int a = 2;
    float b = 2.5;
    char c = 's';
    int *pa = &a;
    float *pb = &b;
    char *pc = &c;
    printf("a = %i, b = %g, c = %c\n",a,b,c);
    *pa = 5;
    *pb = 6.9;
    *pc = 'z';
    printf("a = %i, b = %g, c = %c\n",a,b,c);
}
void ex2(){
    int a,b;
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("\nDigite outro numero: ");
    scanf("%i",&b);

    if(&a>&b){printf("\nA variavel do maior endereco eh %i",a);}
    else{printf("\nA variavel do maior endereco eh %i",b);}
}
void ex3(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    printf("\n %i %i vira ",a,b);
    swap(&a,&b);
    printf("%i %i",a,b);
}
void ex4(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    swapmaior(a,b,&a,&b);
    printf("\n%i %i",a,b);
}
void ex5(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    printf("\nA soma do dobro das variaveis eh %i",somadobro(&a,&b));
}
void ex6(){ 
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    soma(&a,&b);
    printf("\nA soma eh %i",a);
}
void ex7(){
    char frase[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]s",frase);
    procedimento(frase);

}
void ex8(){
    float array[10];
    for(int i = 0; i<10; i++){
        printf("Posicao %i = %i\n",i,&array[i]);
    }
}
void ex9(){
    int array[5];
    int i;
    int *t = array;

    for(int i=0; i<5; i++, t++){
        printf("\nDigite um numero: ");
        scanf("%i",t);
        *t *= 2;
    }

    printf("Numeros dobrados: ");
    t-=5;
    for(int i=0; i<5; i++, t++){
        printf("%i\t",*t);

    }
}
void ex10(){
    int array[5];
    int i;
    int *t = array;

    for(int i=0; i<5; i++, t++){
        printf("\nDigite um numero: ");
        scanf("%i",t);
    }
    t-=5;
    for(int i=0; i<5; i++, t++){
        if(*t%2==0){printf("\nO endereco de %i eh %i",*t,t);}

    }
}
void ex11(){
    int num[3];
    for(int i=0; i<3; i++){
        printf("\nDigite um numero: ");
        scanf("%i",&num[i]);
    }
    bubblesort(&num);
    for(int i=0; i<3; i++){printf("%i\t",num[i]);}
}
void ex12(){
    int r;
    char palavra1[100];
    char palavra2[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]s",palavra1);
    printf("Digite outra frase: ");
    scanf(" %[^\n]s",palavra2);
    r = compstring(&palavra1,&palavra2);
    if(r==1){printf("\nPalavra contida");}
    else{printf("\nPalavra nao contida");}
}
void ex13(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%i",&tamanho);

    int array[tamanho];

    printf("\nPreencha o array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Numero %i: ",i);
        scanf("%i",&array[i]);
    }
    printar(array,tamanho);
}
void ex14(){
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%i",&n);

    float array[n];

    printf("\nPreencha o array:\n");
    for(int i=0;i<n;i++){
        printf("Numero %i: ",i);
        scanf("%f",&array[i]);
    }
    printf("\nEsse vetor possui %i numeros negativos",negativos(&array,n));
}
void ex15(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%i",&tamanho);

    int array[tamanho];

    printf("\nPreencha o array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Numero %i: ",i);
        scanf("%i",&array[i]);
    }

    int min = array[0], max = array[0];
    maxmin(array,&max,&min,tamanho);

    printf("\nO valor maximo do array eh %i",max);
    printf("\nO valor minimo do array eh %i",min);
}
void ex16(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%i",&tamanho);

    int array[tamanho];

    printf("\nPreencha o array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Numero %i: ",i);
        scanf("%i",&array[i]);
    }

    int min = array[0], max = array[0];
    maxmin(array,&max,&min,tamanho);

    printf("\nO valor maximo do array eh %i",max);
    printf("\nO valor minimo do array eh %i",min);
}

//menu
void main(){
    int q;
    printf("==========Menu=========");
    printf("\nDigite o numero da questao:");
    scanf("%i",&q);
    printf("\n");

    if(q==1){ex1();} 
    else if(q==2){ex2();}
    else if(q==3){ex3();}
    else if(q==4){ex4();}
    else if(q==5){ex5();}
    else if(q==6){ex6();}
    else if(q==7){ex7();}
    else if(q==8){ex8();}
    else if(q==9){ex9();}
    else if(q==10){ex10();}
    else if(q==11){ex11();}
    else if(q==12){ex12();}
    else if(q==13){ex13();}
    else if(q==14){ex14();}
    else if(q==15){ex15();}
    else if(q==16){ex16();}
}

#include <stdlib.h>
#include <string.h>
//função
int swap (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
    return 0;
}
int swapmaior (int a, int b, int *x, int *y){
    if(a<b){
        int aux = *x;
        *x = *y;
        *y = aux;
    }
    return 0;
}
int somadobro(int *a, int *b){
    *a *= 2; 
    *b *= 2; 
    return (*a+*b);
}
void soma(int *a, int *b){
    *a = *a+*b;
}
void procedimento(char frase[]){
    for(int i = 0; i<strlen(frase);i++){
        if(frase[i] == 'a'){frase[i] = 'u';}
        else if(frase[i] == 'e'){frase[i] = 'o';}
        else if(frase[i] == 'i'){frase[i] = 'u';}
        else if(frase[i] == 'o'){frase[i] = 'a';}
        else if(frase[i] == 'u'){frase[i] = 'e';}
    }
    printartroca(frase);
}
void printartroca(char frase[]){
    printf("Nova frase: %s\n",frase);
}
void bubblesort(int *num){
    int bubble[3];

    for(int i=0;i<3;i++,num++){bubble[i] = *num;}
    num-=3;

    for(int i=0;i<3;i++){
        for(int j=3;j>0;j--){
            if(bubble[j-1]>bubble[j]){swap(&bubble[j-1],&bubble[j]);}
        }
    }

    for(int i=0;i<3;i++,num++){*num = bubble[i];}
    num-=3;
}
int compstring(char *palavra1, char *palavra2){
    int tam1 = strlen(palavra1);
    int tam2 = strlen(palavra2);
    int i = 0, j = 0, k = 0;
    for(i=0;i<tam1;i++,palavra1++){
        for(j=0;j<tam2;j++,palavra2++){
            if(*palavra1 != *palavra2){break;}
            if(j == tam2-1){return 1;}
            palavra1++;
        } 
        palavra2-=j;

    }
    return 0;
}
void printar(int array[], int len){
    int *parray = array;
    for(int i=0;i<len;i++,parray++){
        printf("%i\t",*parray);
    }
}
int negativos(float *vet, int N){
    int cont = 0;
    for(int i=0;i<N;i++,vet++){
        if(*vet<0){cont++;}
    }
    return cont;
}
void maxmin(int V[], int *max, int *min, int len){
    printf("\nlen = %i",len);

    for (int i=0; i<len;i++){
        if(V[i]>*max){*max = V[i];}
        if(V[i]<*min){*min = V[i];}
    }
}


//questão
void ex1(){
    int a = 2;
    float b = 2.5;
    char c = 's';
    int *pa = &a;
    float *pb = &b;
    char *pc = &c;
    printf("a = %i, b = %g, c = %c\n",a,b,c);
    *pa = 5;
    *pb = 6.9;
    *pc = 'z';
    printf("a = %i, b = %g, c = %c\n",a,b,c);
}
void ex2(){
    int a,b;
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("\nDigite outro numero: ");
    scanf("%i",&b);

    if(&a>&b){printf("\nA variavel do maior endereco eh %i",a);}
    else{printf("\nA variavel do maior endereco eh %i",b);}
}
void ex3(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    printf("\n %i %i vira ",a,b);
    swap(&a,&b);
    printf("%i %i",a,b);
}
void ex4(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    swapmaior(a,b,&a,&b);
    printf("\n%i %i",a,b);
}
void ex5(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    printf("\nA soma do dobro das variaveis eh %i",somadobro(&a,&b));
}
void ex6(){ 
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("\nDigite o segundo numero:");
    scanf("%d",&b);
    soma(&a,&b);
    printf("\nA soma eh %i",a);
}
void ex7(){
    char frase[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]s",frase);
    procedimento(frase);

}
void ex8(){
    float array[10];
    for(int i = 0; i<10; i++){
        printf("Posicao %i = %i\n",i,&array[i]);
    }
}
void ex9(){
    int array[5];
    int i;
    int *t = array;

    for(int i=0; i<5; i++, t++){
        printf("\nDigite um numero: ");
        scanf("%i",t);
        *t *= 2;
    }

    printf("Numeros dobrados: ");
    t-=5;
    for(int i=0; i<5; i++, t++){
        printf("%i\t",*t);

    }
}
void ex10(){
    int array[5];
    int i;
    int *t = array;

    for(int i=0; i<5; i++, t++){
        printf("\nDigite um numero: ");
        scanf("%i",t);
    }
    t-=5;
    for(int i=0; i<5; i++, t++){
        if(*t%2==0){printf("\nO endereco de %i eh %i",*t,t);}

    }
}
void ex11(){
    int num[3];
    for(int i=0; i<3; i++){
        printf("\nDigite um numero: ");
        scanf("%i",&num[i]);
    }
    bubblesort(&num);
    for(int i=0; i<3; i++){printf("%i\t",num[i]);}
}
void ex12(){
    int r;
    char palavra1[100];
    char palavra2[100];
    printf("Digite uma frase: ");
    scanf(" %[^\n]s",palavra1);
    printf("Digite outra frase: ");
    scanf(" %[^\n]s",palavra2);
    r = compstring(&palavra1,&palavra2);
    if(r==1){printf("\nPalavra contida");}
    else{printf("\nPalavra nao contida");}
}
void ex13(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%i",&tamanho);

    int array[tamanho];

    printf("\nPreencha o array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Numero %i: ",i);
        scanf("%i",&array[i]);
    }
    printar(array,tamanho);
}
void ex14(){
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%i",&n);

    float array[n];

    printf("\nPreencha o array:\n");
    for(int i=0;i<n;i++){
        printf("Numero %i: ",i);
        scanf("%f",&array[i]);
    }
    printf("\nEsse vetor possui %i numeros negativos",negativos(&array,n));
}
void ex15(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%i",&tamanho);

    int array[tamanho];

    printf("\nPreencha o array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Numero %i: ",i);
        scanf("%i",&array[i]);
    }

    int min = array[0], max = array[0];
    maxmin(array,&max,&min,tamanho);

    printf("\nO valor maximo do array eh %i",max);
    printf("\nO valor minimo do array eh %i",min);
}
void ex16(){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%i",&tamanho);

    int array[tamanho];

    printf("\nPreencha o array:\n");
    for(int i=0;i<tamanho;i++){
        printf("Numero %i: ",i);
        scanf("%i",&array[i]);
    }

    int min = array[0], max = array[0];
    maxmin(array,&max,&min,tamanho);

    printf("\nO valor maximo do array eh %i",max);
    printf("\nO valor minimo do array eh %i",min);
}

//menu
void main(){
    int q;
    printf("==========Menu=========");
    printf("\nDigite o numero da questao:");
    scanf("%i",&q);
    printf("\n");

    if(q==1){ex1();} 
    else if(q==2){ex2();}
    else if(q==3){ex3();}
    else if(q==4){ex4();}
    else if(q==5){ex5();}
    else if(q==6){ex6();}
    else if(q==7){ex7();}
    else if(q==8){ex8();}
    else if(q==9){ex9();}
    else if(q==10){ex10();}
    else if(q==11){ex11();}
    else if(q==12){ex12();}
    else if(q==13){ex13();}
    else if(q==14){ex14();}
    else if(q==15){ex15();}
    else if(q==16){ex16();}
}