// Definindo o identificador da classe
#ifndef ANIMAL_H
#define ANIMAL_H

// Biblioteca nativa:
#include <iostream>
using namespace std;

class Animal{
    public:
        virtual string fala() = 0; // método virtual puro
};

#endif