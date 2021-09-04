// Biblioteca nativa:
#include <iostream>
// Biblioteca da questão:
#include "utils.h"

using namespace std;

    // Método que fará a conversão de Fahrenheit para Celsius
double Utils::toCelcius(double fahrenheit){
    double conta = 0.00;
    if(fahrenheit >= -459.67){
        conta = (fahrenheit - 32.00)/1.80;
        return conta;
    }else{
        cout << "Infelizmente o zero absoluto é -459.67, dê um valor igual ou acima à isso\n";
        return conta;
    }
}