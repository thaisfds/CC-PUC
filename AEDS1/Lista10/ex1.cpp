// Biblioteca nativa:
#include <iostream>
// Biblioteca da questão: 
#include "notaFiscal.h"
using namespace std;

    // Construtor primário
NotaFiscal::NotaFiscal(){
    this->numPeca = "";
    this->descPeca = "";
    this->qntCompra = 0;
    this->preco = 0.00;
}
    // Construtor secundário
NotaFiscal::NotaFiscal(string numero, string descricao, int quantidade, float preco){
    this->numPeca = numero;
    this->descPeca = descricao;
    this->qntCompra = quantidade;
    this->preco = preco;
}
    // Setters
void NotaFiscal::setNumPeca(string numero){
    this->numPeca = numero;
}
void NotaFiscal::setDescPeca(string descricao){
    this->descPeca = descricao;
}
void NotaFiscal::setQntCompra(int qntCompra){
    this->qntCompra = qntCompra;
}
void NotaFiscal::setPreco(float preco){
    this->preco = preco;
}
    // Getters
string NotaFiscal::getNumPeca(){
    return this->numPeca;
}
string NotaFiscal::getDescPeca(){
    return this->descPeca;
}
int NotaFiscal::getQntCompra(){
    return this->qntCompra;
}
float NotaFiscal::getPreco(){
    return this->preco;
}
    // Método que retornará o total da compra
float NotaFiscal::getTotalNota(){
    return this->preco * this->qntCompra;
}