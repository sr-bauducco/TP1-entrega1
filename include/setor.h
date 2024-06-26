#ifndef DINHEIRO_H
#define DINHEIRO_H

#include <iostream>

class Dinheiro {
private:
    double valor;

public:
    // Construtor
    Dinheiro(double valor = 0.0) {
        setValor(valor);
    }

    // Getter para o atributo valor
    double getValor() const {
        return valor;
    }

    // Setter para o atributo valor, verificando se est� dentro do intervalo permitido
    void setValor(double valor) {
        if (valor >= 0 && valor <= 1000000) {
            this->valor = valor;
        } else {
            std::cerr << "Erro: Valor deve estar entre 0 e 1000000." << std::endl;
        }
    }

    // Fun��o para imprimir o valor do dinheiro
    void imprimir() const {
        std::cout << "Valor do dinheiro: R$ " << valor << std::endl;
    }
};

#endif // DINHEIRO_H
