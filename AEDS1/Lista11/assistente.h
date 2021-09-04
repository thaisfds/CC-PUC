// Definindo o identificador da classe
#ifndef ASSISTENTE_H
#define ASSISTENTE_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "funcionario.h"

using namespace std;

class Assistente:public Funcionario{
    protected:
        int numMatricula;
    public:
        Assistente(); // Construtor primário
        Assistente(int, string, string, float); // Construtor secundário
        // Setter
        void setNumMatricula(int);
        // Método que retornará os dados do funcionário
        void exibeDados();
};

#endif // Fim do identificador da classe