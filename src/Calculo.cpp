/* 
 * File:   Fibonacci.cpp
 * Author: fronald
 * 
 * Created on 21 de Outubro de 2016, 11:02
 */

#include "Calculo.h"
#include <vector>

Calculo::Calculo(int inicio, unsigned int tamanho) {
    this->inicio = inicio;
    this->tamanho = tamanho;
}

void Calculo::calcula() {
    // TODO: Implementar
}

void Calculo::limpaCalculo(){
    //
}

unsigned int Calculo::numeroResultados(){
   // TODO: Implementar
    return 0;
}

int Calculo::resultado(unsigned int indice){
   // TODO: Implementar
    return 0;
}

string Calculo::nome() const{
    return "Calculo vazio";
}

Calculo::~Calculo() {
    this->inicio = 0;
}
