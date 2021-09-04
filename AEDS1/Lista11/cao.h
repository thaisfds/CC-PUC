// Definindo o identificador da classe
#ifndef CAO_H
#define CAO_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "animal.h"
using namespace std;

class Cao:public Animal{
    public:
        string fala(); // método herdado 
};

#endif