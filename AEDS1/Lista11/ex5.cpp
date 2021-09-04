// Biblioteca nativa:
#include <iostream>
// Bibliotecas da questão:
#include "bicicleta.h"
#include "automovel.h"

// Inicializando método: Veiculo

    // Construtores
Veiculo::Veiculo(){
    this->peso = 0.00;
}
Veiculo::Veiculo(float peso){
    this->peso = peso;
}

// Inicializando método: Automovel

    // Construtores
Automovel::Automovel():Veiculo(){
    this->potencia = 0.00;
}
Automovel::Automovel(float peso, float potencia):Veiculo(peso){
    this->potencia = potencia;
}
void Automovel::listarVerificacoes(){
    cout << "Será preciso verificar se as rodas do Automovel não estão vazias\n\n\n";
    cout << "Será necessário ver se os freios estão funcionando\n\n\n";
}
void Automovel::ajustar(){
    cout << "Ajustando pressão da roda...\n\n\n";
    cout << "Pronto :)\n\n\n";
}
void Automovel::limpar(){
    cout << "Limpando sua Automovel...\n\n\n";
    cout << "Agora ele está brilhando \n\n\n";
}

// Inicializando método: Bicicleta

    // Construtores
Bicicleta::Bicicleta():Veiculo(){
    this->marca = "";
}
Bicicleta::Bicicleta(float peso, string marca):Veiculo(peso){
    this->marca = marca;
}
void Bicicleta::listarVerificacoes(){
    cout << "Será preciso verificar se as rodas da bicicleta não estão vazias\n\n\n";
    cout << "Será necessário ver se os freios estão funcionando\n\n\n";
}
void Bicicleta::ajustar(){
    cout << "Ajustando pressão da roda...\n\n\n";
    cout << "Pronto :)\n\n\n";
}
void Bicicleta::limpar(){
    cout << "Limpando sua bicicleta...\n\n\n";
    cout << "Agora ela está brilhando \n\n\n";
}