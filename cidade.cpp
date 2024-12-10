#include "cidade.h"

Cidade::Cidade(const std::string &nome) : nome(nome) {}

std::string Cidade::getNome() const {
    return nome;
}

void Cidade::setNome(const std::string &novoNome) {
    nome = novoNome;
} 