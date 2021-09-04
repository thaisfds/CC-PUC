// Definindo o identificador da classe
#ifndef BICICLETA_H
#define BICICLETA_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "veiculo.h"
using namespace std;

class Bicicleta:public Veiculo{
    // Atributos que estarão presentes em todas as "classes filhas"
    public:  
        string marca;
    public:
        Bicicleta(); // Construtor primário
        Bicicleta(float, string); // Construtor secundário
        void listarVerificacoes();
        void ajustar();
        void limpar();
};

#endif // Fim do identificador da classe