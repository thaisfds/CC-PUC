// Biblioteca nativa:
#include <iostream>
// Biblioteca da questão:
#include "empregado.h"

using namespace std;

    // Construtor primário
Empregado::Empregado(){
    this->nome = "";
    this->sobrenome = "";
    this->salarioMensal = 0.00;
}
    // Construtor secundário
Empregado::Empregado(string nome, string sobrenome, float salarioMensal){
    this->nome = nome;
    this->sobrenome = sobrenome;
    this->salarioMensal = salarioMensal;
}
    // Setters
void Empregado::setNome(string nome){
    this->nome = nome;
}
void Empregado::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}
void Empregado::setSalarioMensal(float salario){
    this->salarioMensal = salario;
}
    // Getters
string Empregado::getNome(){
    return this->nome;
}
string Empregado::getSobrenome(){
    return this->sobrenome;
}
float Empregado::getSalarioMensal(){
    return this->salarioMensal;
}
    // Método que retornará o salário anual do empregado
float Empregado::salarioAnual(){
    return this->salarioMensal * 12;
}
    // Método que receberá o aumento do salário do empregado (em porcentagem)
float Empregado::aumentoSalario(float porcentagem){
    return this->salarioMensal * (porcentagem / 100);
}