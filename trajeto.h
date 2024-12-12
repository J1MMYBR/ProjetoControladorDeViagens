#ifndef TRAJETO_H
#define TRAJETO_H

#include <string>
#include "cidade.h"

class Trajeto {
private:
    Cidade *origem;
    Cidade *destino;
    char tipo; // "A" aquatico, "T" terrestre
    int distancia;

public:
    Trajeto(Cidade *origem, Cidade *destino, char tipo, int distancia); //construtor

    Cidade *getOrigem();
    Cidade *getDestino();

    char getTipo();
    int getDistancia();    
};

#endif