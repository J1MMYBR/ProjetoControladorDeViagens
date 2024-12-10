#include "passageiro.h"
#include "cidade.h"

Passageiro::Passageiro(const std::string &nome, Cidade *localAtual) 
    : nome(nome), localAtual(localAtual) {}

std::string Passageiro::getNome() const {
    return nome;
}

Cidade *Passageiro::getLocalAtual() {
    return localAtual;
}

void Passageiro::setLocalAtual(Cidade *local) {
    localAtual = local;
}