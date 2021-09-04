// Definindo o identificador da classe
#ifndef CDS_H
#define CDS_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "loja.h"

using namespace std;

class Cds:public Loja{
    private:
        int numFaixas;
    public:
        Cds(); // Construtor primário
        Cds(string, int, float); // Construtor secundário
        // Setter
        void setNumFaixas(int);
        // Método que retornará os dados do produto
        void toString();
};

#endif // Fim do identificador da classe