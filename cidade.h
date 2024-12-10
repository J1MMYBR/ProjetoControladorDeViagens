#ifndef CIDADE_H
#define CIDADE_H

#include <string>

class Cidade {
private:
    std::string nome;

public:
    Cidade(const std::string &nome); //Construtor

    std::string getNome() const;

    void setNome(const std::string &novoNome);
};

#endif