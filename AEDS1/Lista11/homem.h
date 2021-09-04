// Definindo o identificador da classe
#ifndef HOMEM_H
#define HOMEM_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "animal.h"
using namespace std;

class Homem:public Animal{
    public:
        string fala(); // método herdado 
};

#endif