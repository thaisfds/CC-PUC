// Definindo o identificador da classe
#ifndef GATO_H
#define GATO_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "animal.h"
using namespace std;

class Gato:public Animal{
    public:
        string fala(); // método herdado 
};

#endif