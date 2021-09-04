#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H

#include "veiculo.h"
#include "motor.h"
#include <iostream>
using namespace std;


class CarroPasseio:public Veiculo, public Motor{
    private:
        string modelo;
        string cor;
    public:
        CarroPasseio(); // Construtor primário
        CarroPasseio(string, string); // Construtor secundário
        // Setters
        void setModelo(string); 
        void setCor(string); 
        // Getters
        string getModelo();
        string getCor();
        void printInfo();
};


#endif