#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo{
    private:
        float peso;
        float veloMaxima;
        float preco;
    public:
        Veiculo(); // Construtor primário
        Veiculo(float, float, float); // Construtor secundário
        // Setters
        void setPeso(float); 
        void setVeloMaxima(float); 
        void setPreco(float); 
        // Getters
        float getPeso();
        float getVeloMaxima();
        float getPreco();
        // Print
        protected:
            void printInfo();
};

#endif