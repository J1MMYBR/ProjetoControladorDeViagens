#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include <string>
#include "cidade.h"

class Passageiro {
private:
    std::string nome;
    Cidade *localAtual;

public:
    Passageiro(const std::string &nome, Cidade *localAtual);

    std::string getNome() const;

    Cidade *getLocalAtual();

    void setLocalAtual(Cidade *local);
};

#endif