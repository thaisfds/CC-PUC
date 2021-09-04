// Biblioteca nativa:
#include <iostream>
// Bibliotecas da questão:
#include "loja.h"
#include "livros.h"
#include "cds.h"
#include "dvds.h"

// Inicializando métodos: Loja 

    // Construtores
Loja::Loja(){
    this->nome = "";
    this->preco = 0.00;
}
Loja::Loja(string nome, float preco){
    this->nome = nome;
    this->preco = preco;
}

// Inicializando métodos: Livros

    // Construtores
Livros::Livros():Loja(){
    this->autor = "";
}
Livros::Livros(string nome, string autor, float preco):Loja(nome, preco){
    this->autor = autor;
}
    // Setter
void Livros::setNomeAutor(string autor){
    this->autor = autor;
}
    // Método que retornará os dados do produto
void Livros::toString(){
    cout << "O livro '" << this->nome << "' é do autor: " << this->autor << "\nPreço R$: " << this->preco << ".";
}

// Inicializando métodos: CDs

    // Construtores
Cds::Cds():Loja(){
    this->numFaixas = 0;
}
Cds::Cds(string nome, int numeroFaixas, float preco):Loja(nome, preco){
    this->numFaixas = numeroFaixas;
}
    // Setter
void Cds::setNumFaixas(int numeroFaixas){
    this->numFaixas = numeroFaixas;
}
    // Método que retornará os dados do produto
void Cds::toString(){
    cout << "O CD '" << this->nome << "' tem " << this->numFaixas << " faixas.\nPreço R$: " << this->preco << ".";
}

// Inicializando métodos: DVDs

    // Construtores
Dvds::Dvds():Loja(){
    this->duracao = 0.00;
}
Dvds::Dvds(string nome, float duracao, float preco):Loja(nome, preco){
    this->duracao = duracao;
}
    // Setter
void Dvds::setDuracao(float duracao){
    this->duracao = duracao;
}
    // Método que retornará os dados do produto
void Dvds::toString(){
    cout << "O CD '" << this->nome << "' tem duração de: " << this->duracao << " .\nPreço R$: " << this->preco << ".";
}