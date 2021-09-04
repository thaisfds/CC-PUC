// Definindo o identificador da classe
#ifndef DVDS_H
#define DVDS_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "loja.h"

using namespace std;

class Dvds:public Loja{
    private:
        float duracao;
    public:
        Dvds(); // Construtor primário
        Dvds(string, float, float); // Construtor secundário
        // Setter
        void setDuracao(float);
        // Método que retornará os dados do produto
        void toString();
};

#endif // Fim do identificador da classe