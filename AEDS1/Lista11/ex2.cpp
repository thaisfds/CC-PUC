// Biblioteca nativa:
#include <iostream>
// Bibliotecas da questão:
#include "homem.h"
#include "cao.h"
#include "gato.h"

// Inicializando método: Homem

    // Método que printará o som que é "feito" pela Classe
string Homem::fala(){
    return "Oi, eu sou um Humano!\n";
}

// Inicializando método: Cão

    // Método que printará o som que é "feito" pela Classe
string Cao::fala(){
    return "Auau, eu sou um cachorro!\n";
}

// Inicializando métodos: Gato

    // Método que printará o som que é "feito" pela Classe
string Gato::fala(){
    return "Miaumiau, eu sou um gato!\n";
}