// Biblioteca nativa:
#include <iostream>
#include <string>
// Bibliotecas das questões:
#include "gerente.h"                    //
#include "assistente_tecnico.h"         // Questão 01
#include "assistente_administrativo.h"  //

#include "homem.h"                      //
#include "cao.h"                        // Questão 02
#include "gato.h"                       //

#include "conta_especial.h"             // Questão 03

#include "livros.h"                     //
#include "cds.h"                        // Questão 4
#include "dvds.h"                       //


#include "bicicleta.h"                  // 
#include "automovel.h"                  // Questão 05

// Prototipação dos procedimentos:
void menuPrincipal();
void exercicio01();
void menuExercicio01();
void exercicio02();
void exercicio03();
void menuExercicio03();
void exercicio04();
void exercicio05();

// Método principal
int main(){
    int opcao;
    do{
        menuPrincipal();
        cin >> opcao;
        switch (opcao){
            case 1:
                exercicio01();
                getchar();
                break;
            case 2:
                exercicio02();
                getchar();
                break;
            case 3:
                exercicio03();
                getchar();
                break;
            case 4:
                exercicio04();
                getchar();
                break;
            case 5:
                exercicio05();
                getchar();
                break;
        }
    }while(opcao != 6); // Fim do while, opcao == 6


    // Retorno sem erros
    return 0;
}// Fim do método main

// Procedimento que fará o papel de mostrar a opção de questões para o usuário
void menuPrincipal(){
    system("clear || cls");
    cout << "=-=-=-=-=Menu de questões=-=-=-=-=\n";
    cout << "(1) Questão 01\n";
    cout << "(2) Questão 02\n";
    cout << "(3) Questão 03\n";
    cout << "(4) Questão 04\n";
    cout << "(5) Questão 05\n";
    cout << "(6) Sair\n";
}// Fim do procedimento menuPrincipal

// Procedimento que executará os códigos da Questão 01 da lista
void exercicio01(){
    // Variáveis que serão utilizadas no looping da questão
    char opcao;
    bool continuar = true;
    int i = 0;

    // Variáveis que serão utilizadas para fazer a questão
    string nome, telefone, turno = "diurno";
    int tempo, numMatricula;
    float salario, bonusSalario, adicionalNoturno = 0.00;

    // Por motivos de facilidade criei um vetor de objetos de índice 3 (Para 3 profissões).
    Funcionario *funcionarios[3];

    // Looping para execução da questão
    while(continuar){
        menuExercicio01();
        cin >> opcao;
        switch (opcao){
            case 'G':
                cin.ignore();
                cout << "\nDigite o nome do seu Gerente: ";
                getline(cin, nome);
                cout << "\nDigite o telefone de " << nome << ": ";
                cin >> telefone;
                cout << "\nDigite o salário de " << nome << ": ";
                cin >> salario;
                cout << "\nQuanto tempo " << nome << " trabalha na empresa? ";
                cin >> tempo;
                funcionarios[i] = new Gerente(nome, telefone, salario, tempo);
                i++;
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();  
                break;
            case 'A':
                cin.ignore();
                cout << "\nDigite o nome do seu Assistente Administrativo: ";
                getline(cin, nome);
                cout << "\nDigite o telefone de " << nome << ": ";
                cin >> telefone;
                cout << "\nDigite o salário de " << nome << ": ";
                cin >> salario;
                cout << "\nQual é o código de matrícula de " << nome << " ? ";
                cin >> numMatricula;
                cout << "\nQual turno " << nome << " trabalha? (diurno/noturno) ";
                cin >> turno;
                if(turno == "noturno"){
                    cout << "\nQuanto " << nome << " ganhará de adicional por trabalhar a noite? ";
                    cin >> adicionalNoturno;
                }
                funcionarios[i] = new AssistenteAdministrativo(numMatricula, nome, telefone, salario, turno, adicionalNoturno);
                i++;
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();  
                break;
            case 'T':
                cin.ignore();
                cout << "\nDigite o nome do seu Assistente Técnico: ";
                getline(cin, nome);
                cout << "\nDigite o telefone de " << nome << " : ";
                cin >> telefone;
                cout << "\nDigite o salário de " << nome << " : ";
                cin >> salario;
                cout << "\nQual é o código de matrícula de " << nome << " ? ";
                cin >> numMatricula;
                cout << "\nQual é o bonus no salário de " << nome << " ? ";
                cin >> bonusSalario;
                funcionarios[i] = new AssistenteTecnico(numMatricula, nome, telefone, salario, bonusSalario);
                i++;
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();  
                break;
            case 'M':
                for(int j = 0; j < i; j++){
                    system("clear || cls");
                    funcionarios[j]->exibeDados();
                    cout << "\nPressione uma tecla para continuar...";
                    getchar();
                    getchar();
                }
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();
                break;
            case 'S':
                continuar = false;
                delete(*funcionarios);
            default:
                cout << "\nOpção inválida...";
        }// Fim do SWITCH-CASE 
    } // Fim do WHILE (continuar == false)
}// Fim do procedimento exercicio01
void menuExercicio01(){
    system("clear || cls");
    cout << "=-=-=-=-=Menu de opções=-=-=-=-=\n";
    cout << "(G) Cadastrar um GERENTE\n";
    cout << "(A) Cadastrar um ASSISTENTE ADMINISTRATIVO\n";
    cout << "(T) Cadastrar um ASSISTENTE TÉCNICO\n";
    cout << "(M) Mostrar informações dos cadastrados\n";
    cout << "(S) Sair\n";
}// Fim do procedimento menuExercicio01

// Procedimento que executará os códigos da Questão 02 da lista
void exercicio02(){
    // Criando um ponteiro que aponta para um vetor de 10 objetos da classe Animal
    Animal *animais[10];

    // Escolhendo (à mão) em que posição ficará cada animal
    animais[0] = new Homem();
    animais[1] = new Gato();
    animais[2] = new Homem();
    animais[3] = new Cao();
    animais[4] = new Cao();
    animais[5] = new Homem();
    animais[6] = new Gato();
    animais[7] = new Homem();
    animais[8] = new Cao();
    animais[9] = new Gato();

    // Looping que printará o retorno do método "fala()"
    for(int i = 0; i < 10; i++){
        system("clear || cls");
        cout << animais[i]->fala();
        cout << "\nPressione uma tecla para continuar...";
        getchar();
        getchar();
    }// Fim do FOR (i == 10)
    delete(*animais);
}// Fim do procedimento exercicio02

// Procedimento que executará os códigos da Questão 03 da lista
void exercicio03(){
    // Variáveis que serão utilizadas no looping da questão
    char opcao, escolha;
    bool continuar = true;
    

    // Variáveis que serão utilizadas para fazer a questão
    float deposito, saque;

    Conta *conta[0];

    // Looping para execução da questão
    while(continuar){
        menuExercicio03();
        cin >> opcao;
        switch (opcao){
            case 'C':
                cout << "Você deseja criar uma conta normal, ou especial? (n/e)\n";
                cin >> escolha;
                if(escolha == 'e'){
                    conta[0] = new ContaEspecial(1000.00);
                    cout << "Por ser um cliente especial, você iniciará com um saldo de 1000 reais\n";
                }else{
                    conta[0] = new ContaCorrente();
                }
                cout << "Pressione uma tecla para continuar...";
                getchar();
                getchar();
                break;

            case 'D':
                cout << "Quanto você gostaria de depositar? ";
                cin >> deposito;
                conta[0]->depositar(deposito);
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();
                break;
            case 'S':
                cout << "Quanto você gostaria de sacar? ";
                cin >> saque;
                conta[0]->sacar(saque);
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();
                break;
            case 'L':
                cout << "\nSaindo...";
                continuar = false;
                delete(*conta);
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                break;
            case 'V':
                cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
                cout << "Saldo atual: " << conta[0]->getSaldo();
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();
                break;
            default:
                cout << "\nOpção inválida...";
        }// Fim do SWITCH-CASE
    }// Fim do WHILE (continuar == false)
}// Fim do procedimento exercicio03
void menuExercicio03(){
    system("clear || cls");
    cout << "=-=-=-=-=Menu de opções=-=-=-=-=\n";
    cout << "(C) Criar conta corrente\n";
    cout << "(D) Fazer depósito na sua conta\n";
    cout << "(S) Sacar dinheiro na sua conta\n";
    cout << "(V) Ver saldo atual\n";
    cout << "(L) Sair\n";
}// Fim do procedimento menuExercicio01

// Procedimento que executará os códigos da Questão 04 da lista
void exercicio04(){
    // Variáveis que serão utilizadas na questão
    string nomeProduto, autor;
    float preco, duracao;
    int numFaixas;
    
    // Criando um ponteiro que aponta para um vetor de 5 objetos da classe Loja
    Loja *produtos[5];

    // Escolhendo (à mão) em que posição ficará cada produto
    // Por não ter achado uma maneira para identificar qual tipo do produto (Classe),
    // Estou tendo que fazer à mão (Tentei usar typeof, deu erro, e sizeof, CD e DVD tem o msm tamanho)
    cout << "\nQual o nome do CD? ";
    cin >> nomeProduto;
    cout << "\nQuantas faixas o CD tem? ";
    cin >> numFaixas;
    cout << "\nQuanto custa o produto? ";
    cin >> preco;
    system("clear || cls");
    produtos[0] = new Cds(nomeProduto, numFaixas, preco);

    cout << "\nQual o nome do livro? ";
    cin >> nomeProduto;
    cout << "\nQual o nome do autor do livro? ";
    cin >> autor;
    cout << "\nQuanto custa o produto? ";
    cin >> preco;
    system("clear || cls");
    produtos[1] = new Livros(nomeProduto, autor, preco);

    cout << "\nQual o nome do CD? ";
    cin >> nomeProduto;
    cout << "\nQuantas faixas o CD tem? ";
    cin >> numFaixas;
    cout << "\nQuanto custa o produto? ";
    cin >> preco;
    system("clear || cls");
    produtos[2] = new Cds(nomeProduto, numFaixas, preco);

    cout << "\nQual o nome do DVD? ";
    cin >> nomeProduto;
    cout << "\nQual a duração do DVD? ";
    cin >> duracao;
    cout << "\nQuanto custa o produto? ";
    cin >> preco;
    system("clear || cls");
    produtos[3] = new Dvds(nomeProduto, duracao, preco);

    cout << "\nQual o nome do DVD? ";
    cin >> nomeProduto;
    cout << "\nQual a duração do DVD? ";
    cin >> duracao;
    cout << "\nQuanto custa o produto? ";
    cin >> preco;
    system("clear || cls");
    produtos[4] = new Dvds(nomeProduto, duracao, preco);

    // Looping que printará os dados dos produtos
    for(int i = 0; i < 5; i++){
        produtos[i]->toString();
        cout << "\nPressione uma tecla para continuar...";
        getchar();
        if(i == 1){ // Problemas com getchar... Como de costume
            getchar();
        }
    }// Fim do FOR (i == 5)
}// Fim do procedimento exercicio04

// Procedimento que executará os códigos da Questão 05 da lista
void exercicio05(){
    // Variáveis que serão utilizadas para fazer a questão
    float peso, potencia;
    string marca;

    Veiculo *veiculos[1];
    veiculos[0] = new Bicicleta();
    veiculos[1] = new Automovel();
    
    for(int i = 0; i < 2; i++){
        veiculos[i]->listarVerificacoes();
        veiculos[i]->ajustar();
        veiculos[i]->limpar();
        cout << "Pressione uma tecla para continuar...";
        getchar();
    }// Fim do for (i = 2)
    delete(*veiculos);
}// Fim do procedimento exercicio05