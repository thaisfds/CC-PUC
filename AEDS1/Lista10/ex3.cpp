// Biblioteca nativa:
#include <iostream>
// Biblioteca da Questão:
#include "aluno.h"

using namespace std;

    // Construtor primário
Aluno::Aluno(){
    this->nome = "";
    this->serie = "";
    this->grau = 0;
}
    // Construtor secundário
Aluno::Aluno(string nome, string serie, int grau){
    this->nome = nome;
    this->serie = serie;
    this->grau = grau;
}
Aluno::~Aluno(){
    if(count >= 0){
        count--;
    }
}
// void Aluno::deletarAluno(int n){
//     if(alunos[n] != NULL){
//         delete alunos[n];
//         count--;
//         cout << "Apagando aluno...";
//         for(int i = n; i < count; i++){
//             alunos[i] = alunos[i+1];
//         }
//     }
// }
// void Aluno::criarAluno(){
//     if(count >= 0){
//         this->alunos[count] = new Aluno();
//         count++;
//     }
// }
    // Setters
void Aluno::setNome(string nome){
    this->nome = nome;
}
void Aluno::setSerie(string serie){
    this->serie = serie;
}
void Aluno::setGrau(int grau){
    this->grau = grau;
}

    // Getters
string Aluno::getNome(){
    return this->nome;
}
string Aluno::getSerie(){
    return this->serie;
}
int Aluno::getGrau(){
    return this->grau;
}
int Aluno::getAlunos(){
    return this->count;
}

int Aluno::count = 0;
