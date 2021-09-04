// Definindo o identificador da classe
#ifndef GERENTE_H
#define GERENTE_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "funcionario.h"

using namespace std;

class Gerente:public Funcionario{
    private:
        int tempoDeCasa;
    public:
        Gerente(); // Construtor primário
        Gerente(string, string, float, int); // Construtor secundário
        // Setter
        void setTempoDeCasa(int);
        // Método que retornará os dados do funcionário
        void exibeDados();
};

#endif // Fim do identificador da classe