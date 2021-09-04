#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//struct
typedef struct data {
    short dia;
    short mes;
    short ano;
}data;

typedef struct info {
    char nome[50];
    data nascimento;
    float altura;
}info;

typedef struct acao {
    char nome[50];
    char atuacao[50];
    float valorAtual;
    float valorAnterior;
    double variacao;
}acao;

typedef struct pontoInicial {
    float x;
    float y;
    float z;
}pontoInicial;

typedef struct pontoFinal {
    float x;
    float y;
    float z;
}pontoFinal;

typedef struct banda {
    char nome[50];
    char tipoMusica[50];
    int integrantes;
    int ranking;
}banda;

typedef struct aluno {
    char nome[50];
    int matricula;
    float nota1Prova;
    float nota2Prova;
    float nota3Prova;
}aluno;

typedef struct registoDeDados {
    char nome[50];
    int idade;
    char sexo[2];
    char cpf[12];
    data nascimento;
    char codigoSetor[10];
    char cargo[30];
    float salario;
}registoDeDados;

//Funções
gerarData(data *dataNascimento){
    srand(time(NULL));
    dataNascimento->dia = rand()%31+1;
    dataNascimento->mes = rand()%12+1;
    dataNascimento->ano = 1950 + (rand()%71);
}

void cadastarInfo(info *p){
    fflush(stdin);
    printf("Entre com o nome: ");
    scanf("%[^\n]s",p->nome);
    printf("Entre com a altura: ");
    scanf("%f",&p->altura);
    gerarData(&p->nascimento);
}

void mostrarInfo(info p){
    printf("\n");
    printf("Nome: %s \n", p.nome);
    printf("Altura: %g\n", p.altura);
    printf("Data de nascimento: %02d/%02d/%d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}

void pausa(){
    getchar();
    system("cls||clear");
}

void menu3(){
    system("clear || cls");
    printf("1. Digitar os valores do primeiro ponto\n");
    printf("2. Digitar os valores do segundo ponto\n");
    printf("3. Mostrar a distancia entre os pontos\n");
    printf("4. Sair\n");
}

void digitarPonto1(pontoInicial *p){
    fflush(stdin);
    printf("Entre com o valor de x: ");
    scanf("%f",&p->x);
    printf("Entre com o valor de y: ");
    scanf("%f",&p->y);
    printf("Entre com o valor de z: ");
    scanf("%f",&p->z);

    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void digitarPonto2(pontoFinal *p){
    fflush(stdin);
    printf("Entre com o valor de x: ");
    scanf("%f",&p->x);
    printf("Entre com o valor de y: ");
    scanf("%f",&p->y);
    printf("Entre com o valor de z: ");
    scanf("%f",&p->z);

    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void mostarDistancia(pontoInicial p1, pontoFinal p2){
    float x = pow((p2.x - p1.x),2);
    float y = pow((p2.y - p1.y),2);
    float z = pow((p2.z - p1.z),2);
    float distancia = sqrt(x + y + z);

    printf("Primeiro ponto: x(%g) y(%g) z(%g)\n",p1.x,p1.y,p1.z);
    printf("Segundo ponto: x(%g) y(%g) z(%g)\n",p2.x,p2.y,p2.z);
    printf("A distancia entre os 2 pontos eh %g\n",distancia);

    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();

}

void cadastarAcao(acao *a){
    fflush(stdin);
    system("clear || cls");
    printf("\nEntre com o nome da compania: ");
    scanf(" %[^\n]s",a->nome);
    printf("\nEntre com a area de atuacao da compania: ");
    scanf(" %[^\n]s",a->atuacao);
    printf("\nEntre com o valor atual da acao (em reais): ");
    scanf("%f",&a->valorAtual);
    printf("\nEntre com o valor anterior da acao (em reais): ");
    scanf("%f",&a->valorAnterior);
    printf("\nEntre com a variacao da acao em porcentagem: ");
    scanf("%lf",&a->variacao);

    
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void mostrarAcao(acao a){
    printf("\n");
    printf("Nome da compania: %s \n", a.nome);
    printf("Area de atuacao: %s \n", a.atuacao);
    printf("Valor atual: %g \n", a.valorAtual);
    printf("Valor anterior: %g \n", a.valorAnterior);
    printf("Variacao da acao em porcentagem: %lf \n", a.variacao);
}

void cadastarBanda(banda *b){
    fflush(stdin);
    system("clear || cls");
    printf("\nEntre com o nome da banda: ");
    scanf(" %[^\n]s",b->nome);
    printf("\nEntre com o tipo de musica tocada: ");
    scanf(" %[^\n]s",b->tipoMusica);
    printf("\nEntre com o numero de integrantes: ");
    scanf("%i",&b->integrantes);
    printf("\nEntre com a posicao no ranking: ");
    scanf("%i",&b->ranking);

    
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void mostrarBanda(banda b){
    printf("\n");
    printf("Nome da banda: %s \n", b.nome);
    printf("Tipo de musica tocada: %s \n", b.tipoMusica);
    printf("Numero de integrantes: %i \n", b.integrantes);
    printf("Posicao do tanking da banda (top 5): %i posicao \n", b.ranking);
}

void pesquisarBanda(banda b[], int count){
    char nomePesquisa[20];
    printf("\nDigite o nome de uma banda: ");
    scanf(" %[^\n]s",nomePesquisa);
    system("clear || cls");
    int resp = -1;
    for(int i = 0; i < count; i++){
        if(strcmp(b[i].nome, nomePesquisa) == 0){
            resp = i;
            i = count;
        }
    }
    if(resp >= 0){
        printf("\nNome encontrado\n");
        mostrarBanda(b[resp]);
        }
    else {printf("Nome nao encontrado\n");} 
}

void cadastarAluno(aluno *a){
    system("clear || cls");
    printf("\nEntre com o nome do aluno: ");
    scanf(" %[^\n]s",a->nome);
    printf("\nEntre com o numero de matricula: ");
    scanf("%i",&a->matricula);
    printf("\nEntre com a nota da primeira prova: ");
    scanf("%f",&a->nota1Prova);
    printf("\nEntre com a nota da segunda prova: ");
    scanf("%f",&a->nota2Prova);
    printf("\nEntre com a nota da terceira prova: ");
    scanf("%f",&a->nota3Prova);
    
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void notasAlunos(aluno a[], int tam){
int maiorNota = a[0].nota1Prova;
int alunoMaiorNota = 0;
int alunoMaiorMedia = 0;
float MaiorMedia = 0;
int alunoMenorMedia = 0;
float MenorMedia = 10;

    for(int i = 0;i<tam;i++){
        if(a[i].nota1Prova > maiorNota){
            maiorNota = a[i].nota1Prova;
            alunoMaiorNota = i;
        }
    }

    printf("\nO aluno com a maior nota na primeira prova eh: %s com %g",a[alunoMaiorNota].nome, a[alunoMaiorNota].nota1Prova);

    for(int i = 0;i<tam;i++){
        float media = ((a[i].nota1Prova)+(a[i].nota2Prova)+(a[i].nota3Prova))/3;
        if(media > MaiorMedia){
            MaiorMedia = media;
            alunoMaiorMedia = i;
        }
        if(media < MenorMedia){
            MenorMedia = media;
            alunoMenorMedia = i;
        }
    }
    printf("\nO aluno com a maior media eh: %s com %g",a[alunoMaiorMedia].nome, MaiorMedia);
    printf("\nO aluno com a menor media eh: %s com %g\n",a[alunoMenorMedia].nome, MenorMedia);

    for(int i = 0;i<tam;i++){
        float media = ((a[i].nota1Prova)+(a[i].nota2Prova)+(a[i].nota3Prova))/3;
        if(media > 6){printf("\nAluno %s aprovado com media %g",a[i].nome,media);}
        if(media < 6){printf("\nAluno %s reprovado",a[i].nome,media);}
    }

}

void cadastarFuncionario(registoDeDados *f){
    system("clear || cls");
    printf("\nEntre com o nome do funcionario: ");
    scanf(" %[^\n]s",f->nome);
    printf("Entre com a idade: ");
    scanf("%i",&f->idade);
    printf("Entre com o sexo (M/F): ");
    scanf(" %[^\n]s",f->sexo);
    printf("Entre com o cpf: ");
    scanf(" %[^\n]s",f->cpf);
    printf("Entre com a data de nascimento: \n");
    printf("Dia: ");
    scanf("%i",&f->nascimento.dia);
    printf("Mes: ");
    scanf("%i",&f->nascimento.mes);
    printf("Ano: ");
    scanf("%i",&f->nascimento.ano);
    printf("Entre com o codigo do setor onde trabalha: ");
    scanf(" %[^\n]s",f->codigoSetor);
    printf("Entre com o cargo: ");
    scanf(" %[^\n]s",f->cargo);
    printf("Entre com o salario do funcionario: ");
    scanf("%f",&f->salario);
    
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

void mostrarFuncionario(registoDeDados f){
    printf("\n");
    printf("Nome: %s \n", f.nome);
    printf("Idade: %i \n", f.idade);
    printf("Sexo: %s \n", f.sexo);
    printf("CPF: %s \n", f.cpf);
    printf("Nascimento: %02d/%02d/%d \n", f.nascimento.dia, f.nascimento.mes, f.nascimento.ano);
    printf("Codigo do Setor: %s \n", f.codigoSetor);
    printf("Cargo: %s \n", f.cargo);
    printf("Salario: %g \n", f.salario);
}

//Questões
void ex1(){
     info *vetor = (info*) malloc(sizeof(info)*10);
    //info vetor[10];
    printf("Preencha o cadastro: \n");
    for(int i = 0; i<10; i++){cadastarInfo(&vetor[i]);}
    pausa();
    printf("Cadastros efetivados: \n");
    for(int i = 0; i<10; i++){mostrarInfo(vetor[i]);}  
}

void ex2(){
    int tam;
    printf("Digite o numero de acoes que deseja adicionar: ");
    scanf("%i", &tam);
    acao Acoes[tam];
    for(int i=0;i<tam;i++){cadastarAcao(&Acoes[i]);}
    system("clear || cls");
    for(int i=0;i<tam;i++){mostrarAcao(Acoes[i]);}
}

void ex3(){
    pontoInicial p1;
    pontoFinal p2;
    int opcao;
    menu3();
    scanf("%d", &opcao);
    while(opcao != 4){
        printf("\n");
        switch(opcao){
            case 1:
                digitarPonto1(&p1); 
            break;
            case 2:
                digitarPonto2(&p2); 
            break;
            case 3:
                mostarDistancia(p1,p2);
            break;
            default:
                printf("Opicao invalida!!!\n");
        }
        fflush(stdin);
        menu3();
        scanf("%d", &opcao);
    }
}

void ex4(){
    int tam = 2;
    banda Bandas[tam];
    for(int i=0;i<tam;i++){cadastarBanda(&Bandas[i]);}
    system("clear || cls");
    for(int i=0;i<tam;i++){mostrarBanda(Bandas[i]);} 
    pesquisarBanda(Bandas, tam);

}

void ex5(){
    printf("Funcao implementada na questao 4. \n");
}

void ex6(){
    int tam = 5;
    aluno Alunos[tam];
    for(int i=0;i<tam;i++){cadastarAluno(&Alunos[i]);}
    notasAlunos(Alunos,tam);
}

void ex7(){
    int tam;
    printf("Quantos funcionario deseja cadastrar: ");
    scanf("%i",&tam);
    registoDeDados funcionarios[tam];
    for(int i=0;i<tam;i++){cadastarFuncionario(&funcionarios[i]);}
    for(int i=0;i<tam;i++){mostrarFuncionario(funcionarios[i]);}
}

void main(){
    system("cls");
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
}