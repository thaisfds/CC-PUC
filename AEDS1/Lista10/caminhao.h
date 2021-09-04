#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "veiculo.h"
#include "motor.h"

using namespace std;

class Caminhao:public Veiculo, public Motor{
    private:
        float tonelada;
        float alturaMax;
        float comprimento;
    public:
        Caminhao(); // Construtor primário
        Caminhao(float, float, float); // Construtor secundário
        // Setters
        void setTonelada(float);
        void setAlturaMax(float);
        void setComprimento(float);
        // Getters
        float getTonelada();
        float getAlturaMax();
        float getComprimento();
        // Print
        void printInfo();
};



#endif