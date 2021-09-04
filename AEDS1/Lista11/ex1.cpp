// Biblioteca nativa:
#include <iostream>
// Bibliotecas da questão:
#include "gerente.h"
#include "assistente_tecnico.h"
#include "assistente_administrativo.h"

// Inicializando métodos: Funcionario 

    // Construtores
Funcionario::Funcionario(){
    this->nomeFuncionario = "";
    this->telefoneFuncionario = "";
    this->salarioFuncionario = 0.00;
}
Funcionario::Funcionario(string nome, string telefone, float salario){
    this->nomeFuncionario = nome;
    this->telefoneFuncionario = telefone;
    this->salarioFuncionario = salario;
}

// Inicializando métodos: Gerente

    // Construtores
Gerente::Gerente():Funcionario(){
    this->tempoDeCasa = 0;
}
Gerente::Gerente(string nome, string telefone, float salario, int tempo):Funcionario(nome, telefone, salario){
    this->tempoDeCasa = tempo;
}
    // Setter
void Gerente::setTempoDeCasa(int tempo){
    this->tempoDeCasa = tempo;
}
    // Método que retornará os dados do funcionário
void Gerente::exibeDados(){
    cout << "O nome do Gerente é: " << this->nomeFuncionario << "\nTelefone: " << this->telefoneFuncionario << "\nEle está " << this->tempoDeCasa << " anos na empresa, com um salário de: R$" << this->salarioFuncionario << "\n";
}

// Inicializando métodos: Assistente

    // Construtores
Assistente::Assistente():Funcionario(){
    this->numMatricula = 0;
}
Assistente::Assistente(int numero, string nome, string telefone, float salario):Funcionario(nome, telefone, salario){
    this->numMatricula = numero;
}
    // Setter
void Assistente::setNumMatricula(int numero){
    this->numMatricula = numero;
}
    // Método que retornará os dados do funcionário
void Assistente::exibeDados(){
    cout << "O nome do Assistente é: " << this->nomeFuncionario << "\nTelefone: " << this->telefoneFuncionario << "\nSeu número de matrícula é: " << this->numMatricula << "\nSalário de: R$" << this->salarioFuncionario << "\n";
}

// Inicializando métodos: Assistente Técnico

    // Construtores
AssistenteTecnico::AssistenteTecnico():Assistente(){
    this->bonusSalarial = 0.00;
}
AssistenteTecnico::AssistenteTecnico(int numero, string nome, string telefone, float salario, float bonus):Assistente(numero, nome, telefone, salario){
    // Atribuindo à "bonusSalarial" o valor passado por parâmetro, alterando assim, o valor da variável
    this->bonusSalarial = bonus; 
    // Atualizando o valor atual do funcionário (bonus% do salário atual)
    salario += (this->bonusSalarial/100) * salario;
}
    // Setter
void AssistenteTecnico::setBonusSalario(float bonus){
    // Atribuindo à "bonusSalarial" o valor passado por parâmetro, alterando assim, o valor da variável
    this->bonusSalarial = bonus; 
    // Atualizando o valor atual do funcionário (bonus% do salário atual)
    this->salarioFuncionario += (this->bonusSalarial/100) * this->salarioFuncionario;
}
    // Getter
float AssistenteTecnico::getBonusSalario(){
    return this->bonusSalarial;
}
    // Método que retornará os dados do funcionário
void AssistenteTecnico::exibeDados(){
    cout << "O nome do Assistente Técnico é: " << this->nomeFuncionario << "\nTelefone: " << this->telefoneFuncionario << "\nSeu número de matrícula é: " << this->numMatricula << "\nSalário de: R$" << this->salarioFuncionario << " (bônus de: " << this->bonusSalarial << "%)\n";
}

// Inicializando métodos: Assistente Administrativo

    // Construtores
AssistenteAdministrativo::AssistenteAdministrativo():Assistente(){
    this->turno = "diurno";
    this->adicionalNoturno = 0.00;
}
AssistenteAdministrativo::AssistenteAdministrativo(int numero, string nome, string telefone, float salario, string turno, float adicional):Assistente(numero, nome, telefone, salario){
    this->turno = turno;
    
    // Verificação pois: Adicional só pode ser dado para quem trabalha no período noturno
    if(this->turno == "noturno"){
        this->adicionalNoturno = adicional;
    }else{
        this->adicionalNoturno = 0.00;
    }
    salario += this->adicionalNoturno;
}
    // Setter
void AssistenteAdministrativo::setTurno(string turno){
    this->turno = turno;
}
void AssistenteAdministrativo::setAdicional(float adicional){
    // Verificação pois: Adicional só pode ser dado para quem trabalha no período noturno
    if(this->turno == "noturno"){
        this->adicionalNoturno = adicional;
    }else{
        this->adicionalNoturno = 0.00;
    }
    this->salarioFuncionario += this->adicionalNoturno;
}
    // Método que retornará os dados do funcionário
void AssistenteAdministrativo::exibeDados(){
    if(this->turno == "noturno"){
        cout << "O nome do Assistente Administrativo é: " << this->nomeFuncionario << "\nTelefone: " << this->telefoneFuncionario << "\nSeu número de matrícula é: " << this->numMatricula << "\nSalário de: R$" << this->salarioFuncionario << " (bônus de: R$ " << this->adicionalNoturno << " por trabalhar a noite)\n";
    }else{
        cout << "O nome do Assistente Administrativo é: " << this->nomeFuncionario << "\nTelefone: " << this->telefoneFuncionario << "\nSeu número de matrícula é: " << this->numMatricula << "\nSalário de: R$" << this->salarioFuncionario << " (bônus de: R$ " << this->adicionalNoturno << ")\n";
    }
}