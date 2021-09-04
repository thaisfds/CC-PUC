#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

/*
1. Explique detalhadamente o try,catch,finally.
*/
//explicado em aula

void testeInteiro(float n){
    int valor = n;
    if(n != valor){
        throw invalid_argument ("O numero nao eh um inteiro!! \n");
    }
}

void ex1(){
    float num;
    try{
        //tenta executar uma ação
        cout<<"Digite um numero inteiro"<<endl;
        cin>>num;
        testeInteiro(num);
        //se acontecer exceção o catch captura o problema
    }catch (invalid_argument &e){
        cout << e.what() << endl;
    }catch (overflow_error &e){
        cout << e.what() << endl;
    }/*finally(){
        //bloco sempre executado, finaliza a exceção (finally é de javascript)
        cout<<"finally block is always executed"<<endl;
    }
    */

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
    
}

/*
2. Num programa que lê um valor inteiro, faça a sua validação através do tratamento de uma
exceção. Caso não seja inteiro continuar pedindo a introdução do valor inteiro.
*/
//feito em aula

void testeInteiro2(float n){
    //variaveis de comparação
    int valorInt = n;

    //teste do inteiro
    if(n != valorInt){
        throw invalid_argument ("O numero nao eh um inteiro, tente novamente. \n");
    }
}

void ex2(){
    float num;

    //loop
    bool continuar = true;

    while(continuar){
        try{
            cout<<"Digite um numero inteiro: ";
            cin>>num;
            testeInteiro2(num);
            continuar = false;
        }catch (invalid_argument &e){
            cout << e.what() << endl;
        }
    }
    cout<<"O numero digitado ("<<num<<") eh um inteiro"<<endl;

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

/*
3. Crie um programa que receba n números e some esses numeros enquanto a soma não for superior
a 100. O programa deverá imprimir o valor somado (antes de atingir o número maior que 100) e
deverá informar quantos números foram somados e qual a média. Refaça seu programa utilizando
as seguintes regras:
a. Utilize os tratamentos de exceção para lidar com a entrada de dados.

b. Quando a soma for superior a 100, o programa deverá gerar uma exceção criada pelo progra-
mador (veja transparência da aula pra ver como fazer), com nome ExcecaoAcimaDeCem.

c. Lance essa exceção, com o uso de throws.
*/

//excessao ExcecaoAcimaDeCem que herda public exception
class ExcecaoAcimaDeCem : public exception{
    const char* what() const throw(){
        return "Excecao acima de 100!! Valor nao permitido";
    }
};

//verificador da soma
void tryDados(float num){
    float soma = 0;
    int count = 0;
    soma += num;

    //caso passe de 100 lanca a excesao
    if (soma > 100){
        throw ExcecaoAcimaDeCem();
    }

    count++;
}

void ex3(){
    int valor = 0;
    int numero = 0;
    int count = 0;
 
    while(valor < 100){
        try{
            cout<<"Digite um numero:"<<endl;
            cin>>numero;
            tryDados(numero);
        }catch (exception &e){
            cout<<"OCORREU UM ERRO: "<< e.what() <<endl;
        }
    }

    //retornando os valores solicitados
    cout<<"Quantidade de valores somados:"<< count <<endl;
    cout<<"Soma total: "<< valor << endl;
    cout<<"Media dos valores:"<<(valor/count)<<endl;

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

/*
4. Escreva um programa para preencher valores de um vetor de inteiros com 10 posições. O usuário
irá informar os valores a serem inseridos e suas respectivas posições no array. O programa
deve tratar as exceções ArrayIndexOutOfBoundsException quando for informada uma posição
inexistente do vetor e NumberFormatException quando o valor informado não for numero.
*/

//nao entendi muito bem o ArrayIndexOutOfBoundsException e NumberFormatException
//entao fiz desse jeito:

void ex4(){
    int vetor[10];
    int count = 0;
    int numero;
    int posicao;
    try{
        for(int i=0; i<10; i++){
            cout<<"Digite um numero:"<<endl;
            cin>>numero;
            cout<<"Digite a posicao do array pra alocar:"<<endl;
            cin>>posicao;
            vetor[posicao] = numero;
        }
    }catch(out_of_range &e){
        cout<<"POSICAO INVALIDA!!"<<endl;
        cout<<"ERRO: "<<e.what()<<endl;
    }catch(invalid_argument &e){
        cout<<"NAO FOI DIGITADO UM NUMERO" << endl;
        cout<<"ERRO: "<<e.what()<<endl;
    }

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

/*
5. Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C.
Em seguida, calcule e mostre a área do triângulo retângulo que tem A por base e C por altura.
Se não for possível formar um triangulo, favor levantar uma exceção.
*/

//erro criado para apontar um erro na construcao de um triangulo (lados)
class erroNoTriangulo : public exception{
    const char* what() const throw(){
        return "Nao eh possivel formar um triangulo com esses valores";
    }

};

//bool que analisa se os lados podem formar um triangulo
bool verificarLadoTriangulos(double a, double b, double c){

    if((fabs(a) > fabs(b+c)) || (fabs(b) > fabs(a+c)) || (fabs(c) > fabs(a+b))){
        throw erroNoTriangulo();
    }

    return true;
}

void ex5(){
    int a, b, c;

    cout<<"Digite tamanho do lado A de um triangulo: ";
    cin>>a;
    cout<<"Digite tamanho do lado B de um triangulo: ";
    cin>>b;
    cout <<"Digite tamanho do lado C de um triangulo: ";
    cin>> c;

    try{
        if(verificarLadoTriangulos(a,b,c)){
            cout<<"Triangulo valido !!"<<endl;
            cout<<"A area do triangulo eh: "<<((a*c)/2)<<endl;
        }
    }catch(exception &e){
        cout<<"Triangulo invalido !!"<<endl;
        cout<<"OCORREU UM ERRO: "<<e.what()<<endl;
        cerr<<"ERRO:"<<e.what()<<endl;
    }

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

//main
int main(){
    system("cls");
    int q;
    cout<<"\n==========Menu========="<<endl;
    cout<<"Digite o numero da questao (0 para sair):"<<endl;
    cin>>q;
    cout<<" "<<endl;

    while(q!=0){
        switch (q){
            case 1:
                ex1();
            break;
            case 2:
                ex2();
            break;
            case 3:
                ex3();
            break;
            case 4:
                ex4();
            break;
            case 5:
                ex5();
            break;
            default:
            break;
        }
        cout<<"==========Menu========="<<endl;
        cout<<"\nDigite o numero da questao (0 para sair):"<<endl;
        cin>>q;
    }
    return 0;
}