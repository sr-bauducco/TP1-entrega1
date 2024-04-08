#ifndef DINHEIRO_H
#define DINHEIRO_H

#include <iostream>

class Dinheiro {
private:
    int valor; // Modificado para int

public:
    // Construtor
    Dinheiro(int valor = 0) {
        setValor(valor);
    }

    // Getter para o atributo valor
    int getValor() const {
        return valor;
    }

    // Setter para o atributo valor, verificando se está dentro do intervalo permitido
    void setValor(int valor) {
        if (valor >= 0 && valor <= 1000000) {
            this->valor = valor;
        } else {
            cout << "Erro: Valor deve estar entre 0 e 1000000." << endl;
        }
    }

    // Função para imprimir o valor do dinheiro
    void imprimir() const {
        std::cout << "Valor do dinheiro: " << valor << std::endl;
    }
};

#endif // DINHEIRO_H
