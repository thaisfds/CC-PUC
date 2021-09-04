// Definindo o identificador da classe
#ifndef CONTACORRENTEESPECIAL_H
#define CONTACORRENTEESPECIAL_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "conta_corrente.h"
using namespace std;

class ContaEspecial:public ContaCorrente{
    public:
        ContaEspecial(); // Construtor primário
        ContaEspecial(float); // Construtor secundário
        // Método que fará o deposito de uma quantida ao saldo
        void depositar(float);
        // Método que fará o saque de uma quantia ao saldo
        void sacar(float);
        // Método que mostrará o saldo atual
        float getSaldo();
};

#endif