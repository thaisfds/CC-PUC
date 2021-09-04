// Definindo o identificador da classe
#ifndef VEICULO_H
#define VEICULO_H

// Biblioteca nativa:
#include <iostream>
using namespace std;

class Veiculo{
    // Atributos que estarão presentes em todas as "classes filhas"
    protected:  
        float peso;
    public:
        Veiculo(); // Construtor primário
        Veiculo(float); // Construtor secundário
        virtual void listarVerificacoes() = 0; // (Virtual puro)
        virtual void ajustar() = 0; // (Virtual puro)
        virtual void limpar() = 0; // (Virtual puro)
};

#endif // Fim do identificador da classe