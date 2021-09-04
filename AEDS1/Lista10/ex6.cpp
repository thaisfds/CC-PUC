// Bibliotecas nativas:
#include <iostream>
// Bibliotecas da questão:
#include "veiculo.h"
#include "motor.h"
#include "caminhao.h"

using namespace std;

// Métodos >> Subclasse "Caminhao"
    // Construtor primário
Caminhao::Caminhao(){
    Veiculo:Veiculo();
    Motor:Motor();
    this->tonelada = 0.00;
    this->alturaMax = 0.00;
    this->comprimento = 0.00;
}
    // Construtor secundáiro
Caminhao::Caminhao(float tonelada, float alturaMax, float comprimento){
    Veiculo:Veiculo();
    Motor:Motor();
    this->tonelada = tonelada;
    this->alturaMax = alturaMax;
    this->comprimento = comprimento;
}
    // Setters
void Caminhao::setTonelada(float tonelada){
    this->tonelada = tonelada;
}
void Caminhao::setAlturaMax(float alturaMax){
    this->alturaMax = alturaMax;
}
void Caminhao::setComprimento(float comprimento){
    this->comprimento = comprimento;
}
    // Getters
float Caminhao::getTonelada(){
    return this->tonelada;
}
float Caminhao::getAlturaMax(){
    return this->alturaMax;
}
float Caminhao::getComprimento(){
    return this->comprimento;
}
    // Print
void Caminhao::printInfo(){
     cout << "Seu veículo custa: R$" << getPreco() << "\nPesa: " << getPeso() << "kg" << "\nTem velócidade máxima de: " << getVeloMaxima() << "km/h\n";
    cout << "\nO seu caminhão possui " << getNumCilindros() << " cilindros\n" << "Com uma potência de " << getPotencia() << " cavalos\n";
    cout << "\nSeu caminhão tem " << getComprimento() << " metros de comprimento, " << getComprimento() << " toneladas, e com altura máxima de " << getAlturaMax() << ".\n";
}