// Biblioteca nativa:
#include <iostream>
// Bibliotecas da questão:
#include "conta_corrente.h"
#include "conta_especial.h"


// Inicializando métodos: Conta Corrente

    // Construtores
ContaCorrente::ContaCorrente(){
    this->saldo = 0.00;
}
ContaCorrente::ContaCorrente(float valor){
    this->saldo = valor;
}
    // Método que fará o deposito de uma quantida ao saldo
void ContaCorrente::depositar(float valor){
    if(valor < 0){
        cout << "Valor inválido...\n";
    }else{
        this->saldo += valor;
    }
}
    // Método que fará o saque de uma quantia ao saldo
void ContaCorrente::sacar(float valor){
    // Há uma taxa de 0.5% do valor sobre cada saque que se é feito
    if((saldo > 0) && (this->saldo - (valor + ((0.5/100) * valor) >= 0))){
        this->saldo -= valor + ((0.5/100) * valor);
    }else{
        cout << "Saldo insuficiente";
    }
}
    // Método que mostrará o saldo atual
float ContaCorrente::getSaldo(){
    return this->saldo;
}

// Inicializando métodos: Conta Corrente Especial

    // Construtores
ContaEspecial::ContaEspecial():ContaCorrente(){
    this->saldo = 0.00;
}
ContaEspecial::ContaEspecial(float valor):ContaCorrente(valor){
    this->saldo = valor;
}
    // Método que fará o deposito de uma quantida ao saldo
void ContaEspecial::depositar(float valor){
    if(valor < 0){
        cout << "Valor inválido...\n";
    }else{
        this->saldo += valor;
    }
}
    // Método que fará o saque de uma quantia ao saldo
void ContaEspecial::sacar(float valor){
    // Há uma taxa de 0.1% do valor sobre cada saque que se é feito
    if((saldo > 0) && (this->saldo - (valor + ((0.1/100) * valor) >= 0))){
        this->saldo -= valor + ((0.1/100) * valor);
    }else{
        cout << "Saldo insuficiente\n";
    }
    cout << "Teste";
}
    // Método que mostrará o saldo atual
float ContaEspecial::getSaldo(){
    return this->saldo;
}