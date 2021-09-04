// Biblioteca nativa:
#include <iostream>
// Bibliotecas das questões:
#include "notaFiscal.h" // ~ Questão 01
#include "empregado.h" // ~ Questão 02
#include "aluno.h" // ~ Questão 03

#include "carroPasseio.h" // ~ Questão 05
#include "caminhao.h" // ~ Questão 06
#include "utils.h" // ~ Questão 07

using namespace std;

void menu(); // Prototipação do procedimento
void exercicio01(); // Prototipação do procedimento
void menuExercicio01(); // Prototipação do procedimento
void exercicio02(); // Prototipação do procedimento
void menuExercicio02(); // Prototipação do procedimento
void exercicio03(); // Prototipação do procedimento
void menuExercicio03(); // Prototipação do procedimento

void exercicio05(); // Prototipação do procedimento
void exercicio06(); // Prototipação do procedimento
void exercicio07(); // Prototipação do procedimento
void menuExercicio07(); // Prototipação do procedimento

int main(){
    int opcao;
    do{
        menu();
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
            case 5:
                exercicio05();
                getchar();
                break;
            case 6:
                exercicio06();
                getchar();
                break;
            case 7:
                exercicio07();
                getchar();
                break;
        }
    } while (opcao != 8);

    // Retorno sem erros
    return 0;
}// Fim do método main

// Procedimento que executará o menu de opções de Questões
void menu(){
    system("clear || cls");
    cout << "***Menu de opções***" << endl;
    cout << " (1) Exercício 01" << endl;
    cout << " (2) Exercício 02" << endl;
    cout << " (3) Exercício 03" << endl;
    cout << " (4) Exercício 04" << endl;
    cout << " (5) Exercício 05" << endl;
    cout << " (6) Exercício 06" << endl;
    cout << " (7) Exercício 07" << endl;
    cout << " (8) Sair" << endl;
}

// Procedimento que executará o código da Questão 01
void exercicio01(){
    string numeroProduto = "", descricaoProduto = "";
    int quantidade = 0;
    float preco = 0.00;
    bool continuar = true;
    char opcao;

    NotaFiscal *nota1 = new NotaFiscal();

    while(continuar){
        menuExercicio01();
        cin >> opcao;
        switch (opcao){
            case 'e':
                cout << "Dê o numero do produto: ";
                cin >> numeroProduto;
                cout << endl;
                nota1->setNumPeca(numeroProduto);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 'd':
                cout << "Dê uma descrição ao produto: ";
                cin >> descricaoProduto;
                cout << endl;
                nota1->setDescPeca(descricaoProduto);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 'p':
                cout << "Dê o preço produto: ";
                cin >> preco;
                cout << endl;
                nota1->setPreco(preco);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 'q':
                cout << "Dê a quantidade de produtos: ";
                cin >> quantidade;
                cout << endl;
                nota1->setQntCompra(quantidade);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 's':
                cout << "Gerando nota fiscal...";
                continuar = false;
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            default:
                cout << "Opção inválida.";
        }
    }// Fim do while (continuar == false)
    cout << "=-=Nota fiscal da compra=-=" << endl;
    cout << "Loja: 'Lojinha do Paulinho'" << endl;
    cout << "Produto ID: '" << nota1->getNumPeca() << "'" << endl;
    cout << "Descrição do produto: '" << nota1->getDescPeca() << "'" << endl;
    cout << "Quantidade comprada: " << nota1->getQntCompra() << endl;
    cout << ">.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>.>." << endl;
    cout << "Preço total: R$" << nota1->getTotalNota() << endl << endl << endl;
    cout << "Pressione uma tecla para cotinuar...";
    delete(nota1);
}// Fim do procedimento exercicio01
void menuExercicio01(){
    system("clear || cls");
    cout << "   ***Menu de opções***" << endl;
    cout << " (e) Escolher um produto" << endl;
    cout << " (d) Dar uma descrição para o produto" << endl;
    cout << " (p) Preço do produto" << endl;
    cout << " (q) Quantidade de produtos" << endl;
    cout << " (s) Sair" << endl;    
}// Fim do procedimento menuExercicio01

// Procedimento que executará o código da Questão 02
void exercicio02(){
    string nome = "";
    string sobrenome = "";
    float salario = 0.00;
    bool continuar = true;
    char opcao;

    Empregado *emp1 = new Empregado();
    Empregado *emp2 = new Empregado();


    while(continuar){
        menuExercicio02();
        cin >> opcao;
        switch (opcao){
            case 'n':
                cout << "Dê o nome do primeiro empregado: ";
                cin >> nome;
                cout << "\nDê o sobrenome do mesmo: ";
                cin >> sobrenome;
                emp1->setNome(nome);
                emp1->setNome(sobrenome);
                cout << "Dê o nome do segundo empregado: ";
                cin >> nome;
                cout << "\nDê o sobrenome do mesmo: ";
                cin >> sobrenome;
                emp2->setNome(nome);
                emp2->setNome(sobrenome);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 's':
                cout << "Dê o salário mensal do empregado (" << emp1->getNome() << " " << emp1->getSobrenome() << ") : ";
                cin >> salario;
                emp1->setSalarioMensal(salario);
                cout << "\nDê o salário mensal do empregado (" << emp2->getNome() << " " << emp2->getSobrenome() << ") : ";
                cin >> salario;
                emp2->setSalarioMensal(salario);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 'a':
                cout << "Em quantos porcento deseja aumentar o salário do empregado (" << emp1->getNome() << " " << emp1->getSobrenome() << ") ? ";
                cin >> salario;
                emp1->aumentoSalario(salario);
                cout << "\nEm quantos porcento deseja aumentar o salário do empregado (" << emp2->getNome() << " " << emp2->getSobrenome() << ") ? ";
                cin >> salario;
                emp2->aumentoSalario(salario);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 'y':
                cout << "O salário anual do empregado (" << emp1->getNome() << " " << emp1->getSobrenome() << ") é : R$" << emp1->salarioAnual();
                cout << "\nO salário anual do empregado (" << emp2->getNome() << " " << emp2->getSobrenome() << ") é : R$" << emp2->salarioAnual();
                cout << "\nPressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 'r':
                continuar = false;
                break;
            default:
                cout << "Opção inválida" << endl;
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
        }
    }// Fim do while (continuar == false)
    cout << "=-=Informações dos empregados=-=" << endl;
    cout << "Nome: " << emp1->getNome() << " " << emp1->getSobrenome() << endl;
    cout << "Salário mensal: R$" << emp1->getSalarioMensal() << endl;
    cout << "Salário anual: R$" << emp1->salarioAnual() << endl;
    cout << "Nome: " << emp2->getNome() << " " << emp2->getSobrenome() << endl;
    cout << "Salário mensal: R$" << emp2->getSalarioMensal() << endl;
    cout << "Salário anual: R$" << emp2->salarioAnual() << endl;
    cout << "Pressione uma tecla para cotinuar...";
    getchar();
    delete(emp1, emp2);
}
void menuExercicio02(){
    system("clear || cls");
    cout << "   ***Menu de opções***" << endl;
    cout << " (n) Nome dos empregados" << endl;
    cout << " (s) Salário dos empregados" << endl;
    cout << " (a) Aumentar o salário" << endl;
    cout << " (y) Salário anual dos empregados" << endl;
    cout << " (r) Sair" << endl;    
}// Fim do procedimento menuExercicio02

// Procedimento que executará o código da Questão 03
void exercicio03(){
    // TODO - Criar uma nova classe que conterá Aluno *alunos[15], para criar e deletar alunos
    // Lembrar de dar delete nos objetos no final do código


    // Variáveis da Classe "Aluno"
    string nome = "", serie = ""; 
    int grau = 0;
    
    // Variáveis que controlarão o uso do menu
    bool continuar = true;
    char opcao;
    int id;
    // Solcitando que o usuário dê a quantidade desejada
    int quantidade = 0;
    cout << "Quantos alunos deseja-se cadastrar? ";
    cin >> quantidade;

    Aluno *alunos = new Aluno[quantidade]; // Criando "quantidade" objetos da classe "Aluno"

    while(continuar){
        menuExercicio03();
        cin >> opcao;
        switch (opcao){
            case 'r':
                // Registrando os dados dos alunos de acordo com o desejo do usuário
                for(int i = 0; i < quantidade; i++){
                    cout << "Digite o nome do " << i+1 << "º aluno : ";
                    cin >> nome;
                    alunos[i].setNome(nome);
                    cout << "\nDigite de qual serie " << alunos[i].getNome() << " está: ";
                    cin >> serie;
                    alunos[i].setSerie(serie);
                    cout << "\nE em que grau " << alunos[i].getNome() << " está? (responder em número) ";
                    cin >> grau;
                    alunos[i].setGrau(grau);
                    cout << "\nPressione uma tecla para continuar...";
                    getchar();
                    getchar();
                    system("clear || cls");
                    //alunos->criarAluno();
                }// Fim do FOR (i == quantidade);
                cout << quantidade << " alunos registrados.\n";
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                break;
            case 'v':
                // Printando os dados dos alunos registrados 
                for(int i = 0; i < quantidade; i++){
                    cout << "\n=-=-=-=-=-=-=Registro do aluno=-=-=-=-=-=-=\n";
                    cout << "[" << i <<"] "<<"Nome do aluno: " << alunos[i].getNome() << "\n";
                    cout << "Ele(a) está no " << alunos[i].getGrau() << "º, " << alunos[i].getSerie() << "\n";
                    cout << "\nPressione uma tecla para continuar...";
                    getchar();
                }// Fim do FOR (i == quantidade);
                break;
            case 'd':
                cout << "\nDigite o id do aluno que deseja-se deletar: ";
                cin >> id;
                alunos += id;
                delete(alunos);
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
            case 's': 
                continuar = false;
                break;
            default:
                cout << "Opção inválida...";
                cout << "Pressione uma tecla para continuar..." << endl;
                getchar();
                getchar();
                break;
        }
    }



    cout << alunos->getAlunos();
    cout << alunos[1].getNome();

                getchar();
                getchar();

}
void menuExercicio03(){
    system("clear || cls");
    cout << "   ***Menu de opções***" << endl;
    cout << " (r) Registrar alunos" << endl;
    cout << " (v) Ver os dados dos alunos" << endl;
    cout << " (d) Deletar um aluno dos registros" << endl;
    cout << " (s) Sair" << endl;    
}// Fim do procedimento menuExercicio03

// Procedimento que executará o código da Questão 05
void exercicio05(){
    system("clear || cls");
    // Variáveis das Classes contidas
    float peso = 0.00, velocidadeMaxima = 0.00, preco = 0.00;
    int numCilindros = 0, potencia = 0;
    string modelo = "", cor = "";
    
    CarroPasseio *driver = new CarroPasseio();
    cout << "Seja bem vindo(a) à concessionária 'Paulim da Fuselagem' \nNos dê as descrições do seu carro: ";
    cout << "\nModelo: ";
    cin >> modelo;
    cout << "\nCor: ";
    cin >> cor;
    cout << "\nQuantidade de cilindros: ";
    cin >> numCilindros;
    cout << "\nPotencia do motor: ";
    cin >> potencia;
    cout << "\nPeso do carro: ";    
    cin >> peso;
    cout << "\nVelocidade máxima atingida pelo carro: ";
    cin >> velocidadeMaxima;
    cout << "\nPreço do Carro: ";
    cin >> preco;

    driver->setModelo(modelo);
    driver->setCor(cor);
    driver->setNumCilindros(numCilindros);
    driver->setPotencia(potencia);
    driver->setPeso(peso);
    driver->setVeloMaxima(velocidadeMaxima);
    driver->setPreco(preco);

    driver->printInfo();
    cout << "Pressione uma tecla para cotinuar...";
    getchar();
    delete(driver);
} // Fim do procedimento exercicio05

// Procedimento que executará o código da Questão 06
void exercicio06(){
    system("clear || cls");
    // Variáveis das Classes contidas
    float peso = 0.00, velocidadeMaxima = 0.00, preco = 0.00, tonelada = 0.00, alturaMax = 0.00, comprimento = 0.00;
    int numCilindros = 0, potencia = 0;
    
    Caminhao *driver = new Caminhao();
    cout << "Seja bem vindo(a) à concessionária 'Paulim da Fuselagem' \nNos dê as descrições do seu caminhão: ";
    cout << "\nTonelada: ";
    cin >> tonelada;
    cout << "\nAltura Máxima: ";
    cin >> alturaMax;
    cout << "\nComprimento do caminhão: ";
    cin >> comprimento;
    cout << "\nQuantidade de cilindros: ";
    cin >> numCilindros;
    cout << "\nPotencia do motor: ";
    cin >> potencia;
    cout << "\nPeso do caminhão: ";    
    cin >> peso;
    cout << "\nVelocidade máxima atingida pelo caminhão: ";
    cin >> velocidadeMaxima;
    cout << "\nPreço do caminhão: ";
    cin >> preco;

    driver->setTonelada(tonelada);
    driver->setAlturaMax(alturaMax);
    driver->setComprimento(comprimento);    
    driver->setNumCilindros(numCilindros);
    driver->setPotencia(potencia);
    driver->setPeso(peso);
    driver->setVeloMaxima(velocidadeMaxima);
    driver->setPreco(preco);

    driver->printInfo();
    cout << "Pressione uma tecla para cotinuar...";
    getchar();
    delete(driver);
} // Fim do procedimento exercicio06

// Procedimento que executará o código da Questão 07
void exercicio07(){
    system("clear || cls");
    // Variáveis que serão utilizadas durante o código
    bool continuar = true;
    char opcao = ' ';

    // Variável que será utilizada para a classe
    double fahrenheit = 0.00;

    Utils *util1 = new Utils(); // Criação do objeto da Classe 
    while(continuar){
        menuExercicio07();
        cin >> opcao;
        switch (opcao){
            case 'c':
                cout << "\nDigite a temperatura que deseja-se converter: ";
                cin >> fahrenheit;
                cout << "\n" << fahrenheit << " convertido para celcius fica: " << util1->toCelcius(fahrenheit);
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();
                break;
            case 's':
                cout << "\nSaindo...";
                continuar = false;
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                break;
            default: 
                cout << "\nOpção inválida.";
                cout << "\nPressione uma tecla para continuar...";
                getchar();
                getchar();
                getchar();
                break;
        }
    }

} // Fim do procedimento exercicio07
void menuExercicio07(){
    system("clear || cls");
    cout << "   ***Menu de opções***" << endl;
    cout << " (c) Converter para Celcius" << endl;
    cout << " (s) Sair" << endl;    
}// Fim do procedimento menuExercicio07