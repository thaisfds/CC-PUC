// Definindo o identificador da classe
#ifndef ASSISTENTETECNICO_H
#define ASSISTENTETECNICO_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "assistente.h"

using namespace std;

class AssistenteTecnico:public Assistente{
    private:
        float bonusSalarial;
    public:
        AssistenteTecnico(); // Construtor primário
        AssistenteTecnico(int, string, string, float, float); // Construtor secundário
        // Setter 
        void setBonusSalario(float);
        // Getter
        float getBonusSalario();
        // Método que retornará os dados do funcionário
        void exibeDados();
};

#endif // Fim do identificador da classe