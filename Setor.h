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
    // Construtor
    Setor(std::string nome = "") {
        setNome(nome);
    }

    // Setter para o atributo nome, verificando se é um valor válido
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

    // Função para verificar se o nome do setor é válido
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
