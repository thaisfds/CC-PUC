// Bibliotecas nativas:
#include <iostream>
// Bibliotecas da questão:
#include "veiculo.h"
#include "motor.h"
#include "carroPasseio.h"

using namespace std;

// Métodos >> SuperClasse "Veículo":
    // Construtor primário
Veiculo::Veiculo(){
    this->peso = 0;
    this-> veloMaxima = 0;
    this-> preco = 0;
}
    // Construtor secundário
Veiculo::Veiculo(float peso, float veloMaxima, float preco){
    this->peso = peso;
    this->veloMaxima = veloMaxima;
    this->preco = preco;
}
    // Setters
void Veiculo::setPeso(float peso){
    this->peso = peso;
}
void Veiculo::setVeloMaxima(float veloMaxima){
    this->veloMaxima = veloMaxima;
}
void Veiculo::setPreco(float preco){
    this->preco = preco;
}
    // Getters
float Veiculo::getPeso(){
    return this->peso;
}
float Veiculo::getVeloMaxima(){
    return this->veloMaxima;
}
float Veiculo::getPreco(){
    return this->preco;
}


// Métodos >> SuperClasse "Motor"
    // Construtor primário
Motor::Motor(){
    this->numCilindros = 0;
    this->potencia = 0;
}
    // Construtor secundário
Motor::Motor(int numCilindros, int potencia){
    this->numCilindros = numCilindros;
    this->potencia = potencia;
}
    // Setters
void Motor::setNumCilindros(int numCilindros){
    this->numCilindros = numCilindros;
}
void Motor::setPotencia(int potencia){
    this->potencia = potencia;
}
    // Getters
int Motor::getNumCilindros(){
   return this->numCilindros; 
}
int Motor::getPotencia(){
   return this->potencia; 
}


// Métodos >> Subclasse "CarroPasseio"
    // Construtor primário
CarroPasseio::CarroPasseio(){
    Veiculo:Veiculo();
    Motor:Motor();
    this->modelo = "";
    this->cor = "";
}
    // Construtor secundário
CarroPasseio::CarroPasseio(string modelo, string cor){
    Veiculo:Veiculo();
    Motor:Motor();
    this->modelo = modelo;
    this->cor = cor;
}
    // Setters
void CarroPasseio::setModelo(string modelo){
    this->modelo = modelo;
}
void CarroPasseio::setCor(string cor){
    this->cor = cor;
}
    // Getters
string CarroPasseio::getModelo(){
    return this->modelo;
}
string CarroPasseio::getCor(){
    return this->cor;
}

    // Printando informações
void CarroPasseio::printInfo(){
    cout << "Seu veículo custa: R$" << getPreco() << "\nPesa: " << getPeso() << "kg" << "\nTem velócidade máxima de: " << getVeloMaxima() << "km/h\n";
    cout << "\nO seu carro possui " << getNumCilindros() << " cilindros\n" << "Com uma potência de " << getPotencia() << " cavalos\n";
    cout << "\nSeu carro é do modelo " << getModelo() << " da cor " << getCor() << " .\n";

}