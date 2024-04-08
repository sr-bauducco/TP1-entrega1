#ifndef SETOR_H
#define SETOR_H

#include <iostream>
#include <string>
#include <vector>

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
    // Construtor
    Setor(std::string nome = "") {
        setNome(nome);
    }

    // Setter para o atributo nome, verificando se � um valor v�lido
    bool setNome(std::string nome) {
        if (nomeValido(nome)) {
            this->nome = nome;
            return true;
        } else {
            return false;
        }
    }

    // Getter para o atributo nome
    std::string getNome() const {
        return nome;
    }

    // Fun��o para verificar se o nome do setor � v�lido
    bool nomeValido(std::string nome) const {
        for (const auto& setor : setoresValidos) {
            if (nome == setor) {
                return true;
            }
        }
        return false;
    }
};

#endif // SETOR_H
