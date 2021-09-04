#ifndef NOTAFISCAL_h
#define NOTAFISCAL_h

#include <iostream>
using namespace std;

class NotaFiscal{
    private:
        string numPeca;
        string descPeca;
        int qntCompra;
        float preco;
    public:
        NotaFiscal(); // Construtor primário
        NotaFiscal(string numero, string descricao, int quantidade, float preco); // Construtor secundário
        // Setters
        void setNumPeca(string numero);
        void setDescPeca(string descricao);
        void setQntCompra(int quantidade);
        void setPreco(float preco);
        // Getters
        string getNumPeca();
        string getDescPeca();
        int getQntCompra();
        float getPreco();
        
        float getTotalNota(); // Método que retornará o total da compra 
};
#endif