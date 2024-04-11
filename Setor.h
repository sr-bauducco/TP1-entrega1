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
        "Constru��o Civil",
        "Energia",
        "Finan�as",
        "Imobili�rio",
        "Papel e celulose",
        "Pecu�ria",
        "Qu�mica e petroqu�mica",
        "Metalurgia e siderurgia",
        "Minera��o"
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
