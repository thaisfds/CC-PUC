// Definindo o identificador da classe
#ifndef CONTA_H
#define CONTA_H

// Biblioteca nativa:
#include <iostream>
using namespace std;

class Conta{
    public:
        virtual void depositar(float) = 0;
        // Método que fará o saque de uma quantia ao saldo
        virtual void sacar(float) = 0;
        // Método que mostrará o saldo atual
        virtual float getSaldo() = 0;
};

#endif