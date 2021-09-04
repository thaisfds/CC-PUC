// Definindo o identificador da classe
#ifndef LOJA_H  
#define LOJA_H  

// Biblioteca nativa:
#include <iostream>
using namespace std;

class Loja{
    protected:
        string nome;
        float preco;
    public:
        Loja(); // Construtor primário
        Loja(string, float); // Construtor secundário
        // Método que printará todos os dados do produto
        virtual void toString() = 0; // método virtual puro
};

#endif // Fim do identificador da classe