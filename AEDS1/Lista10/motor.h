#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
using namespace std;


class Motor{
    private:
        int numCilindros;
        int potencia;
    public:
        Motor(); // Construtor primário
        Motor(int, int); // Construtor secundário
        // Setters
        void setNumCilindros(int); 
        void setPotencia(int); 
        // Getters
        int getNumCilindros();
        int getPotencia();
};


#endif