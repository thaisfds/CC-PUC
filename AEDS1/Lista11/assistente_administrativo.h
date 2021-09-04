// Definindo o identificador da classe
#ifndef ASSISTENTEADMINISTRATIVO_H
#define ASSISTENTEADMINISTRATIVO_H

// Biblioteca nativa:
#include <iostream>
// SUPER-Classe:
#include "assistente.h"

using namespace std;

class AssistenteAdministrativo:public Assistente{
    private:
        string turno;
        float adicionalNoturno;
    public:
        AssistenteAdministrativo(); // Construtor primário
        AssistenteAdministrativo(int, string, string, float, string, float); // Construtor secundário
        // Setter 
        void setTurno(string);
        void setAdicional(float);
        // Método que retornará os dados do funcionário
        void exibeDados();
};

#endif // Fim do identificador da classe