// Definindo o identificador da classe
#ifndef LIVROS_H
#define LIVROS_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "loja.h"

using namespace std;

class Livros:public Loja{
    private:
        string autor;
    public:
        Livros(); // Construtor primário
        Livros(string, string, float); // Construtor secundário
        // Setter
        void setNomeAutor(string);
        // Método que retornará os dados do produto
        void toString();
};

#endif // Fim do identificador da classe