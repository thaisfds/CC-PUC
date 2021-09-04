// Definindo o identificador da classe
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "veiculo.h"
using namespace std;

class Automovel:public Veiculo{
    // Atributos que estarão presentes em todas as "classes filhas"
    public:  
        float potencia;
    public:
        Automovel(); // Construtor primário
        Automovel(float, float); // Construtor secundário
        void listarVerificacoes();
        void ajustar();
        void limpar();
};

#endif // Fim do identificador da classe