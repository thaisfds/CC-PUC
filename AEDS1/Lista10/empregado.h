#ifndef EMPREGADO_h
#define EMPREGADO_h

#include <iostream>
using namespace std;

class Empregado{
    private:
        string nome;
        string sobrenome;
        float salarioMensal;
    public:
        Empregado(); // Construtor primário
        Empregado(string nome, string sobrenome, float salarioMensal); // Construtor secundário
        // Setters
        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalarioMensal(float salario); 
        // Getters
        string getNome();
        string getSobrenome();
        float getSalarioMensal();
        // Método que retornará o salário anual do empregado
        float salarioAnual();
        // Método que receberá o aumento do salário do empregado (em porcentagem)
        float aumentoSalario(float);
};
#endif