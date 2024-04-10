#ifndef DINHEIRO_H
#define DINHEIRO_H
#include <iostream>

using namespace std;

class Dinheiro {
private:
    int valor = 0;
public:
    Dinheiro() {
        setValor(valor);
    }

   int getValor() const {
        return valor;
    }


   void setValor(int valor) {
        if (valor >= 0 && valor <= 1000000) {
            this->valor = valor;
        } else {
            cout << "Erro: Valor deve estar entre 0 e 1000000.";
        }
    }


    void imprimir() const {
        std::cout << "Valor do dinheiro: " << valor ;
    }
};

#endif // DINHEIRO_H
