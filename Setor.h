#ifndef SETOR_H
#define SETOR_H

#include <iostream>
#include <string>
#include <vector>
//working
class Setor {
private:
    std::string nome;
    std::vector<std::string> setoresValidos = {
        "Agricultura",
        "Construção Civil",
        "Energia",
        "Finanças",
        "Imobiliário",
        "Papel e celulose",
        "Pecuária",
        "Química e petroquímica",
        "Metalurgia e siderurgia",
        "Mineração"
    };

public:
    Setor(std::string nome = "") {
        setNome(nome);
    }

    bool setNome(std::string nome) {
        if (validarNome(nome)) {
            this->nome = nome;
            return true;
        } else {
            return false;
        }
    }

    std::string getNome() const {
        return nome;
    }

    bool validarNome(std::string nome) const {
        for (const auto& setor : setoresValidos) {
            if (nome == setor) {
                return true;
            }
        }
        return false;
    }
};

#endif // SETOR_H
