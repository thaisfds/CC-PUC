// Definindo o identificador da classe
#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "conta.h"
using namespace std;

class ContaCorrente:public Conta{
    // Atributos que estarão presentes em todas as classes filhas
    protected:
        float saldo;
    public:
        ContaCorrente(); // Construtor primário
        ContaCorrente(float); // Construtor secundário
        // Método que fará o deposito de uma quantida ao saldo
        void depositar(float);
        // Método que fará o saque de uma quantia ao saldo
        void sacar(float);
        // Método que mostrará o saldo atual
        float getSaldo();
};

#endif