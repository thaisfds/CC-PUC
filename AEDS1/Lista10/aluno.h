#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
using namespace std;

class Aluno{
    private:
        string nome;
        string serie;
        int grau;
        Aluno *alunos[];
        static int count;
    public:
        Aluno(); // Construtor primário
        Aluno(string nome, string serie, int grau); // Construtor secundário
        ~Aluno();
        // Setters
        void setNome(string nome);
        void setSerie(string serie);
        void setGrau(int grau);

        // Getters
        string getNome();
        string getSerie();
        int getGrau();
        int getAlunos();


        void criarAluno(); // Método que criará um aluno
        void deletarAluno(int); // Método que deletará um aluno
};
#endif