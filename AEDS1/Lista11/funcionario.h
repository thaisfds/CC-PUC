// Definindo o identificador da classe
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

// Biblioteca nativa:
#include <iostream>
using namespace std;

class Funcionario{
    // Atributos que estarão presentes em todas as "classes filhas"
    protected:  
        string nomeFuncionario;
        string telefoneFuncionario;
        float salarioFuncionario;
    public:
        Funcionario(); // Construtor primário
        Funcionario(string, string, float); // Construtor secundário
        // Método que retornará os dados do funcionário
        virtual void exibeDados() = 0; // (Virtual puro)
};

#endif // Fim do identificador da classe