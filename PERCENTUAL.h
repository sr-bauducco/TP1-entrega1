#ifndef PERCENTUAL_H_INCLUDED
#define PERCENTUAL_H_INCLUDED
#include <iostream>
using namespace std;

class Percentual {
private:
    int valor = 0;
public:
    Percentual() {
    setPercentual(valor);
    }

    int getPercentual() const {
        return valor;
    }

    void setPercentual(int valor) {
        if (valor >= 0 && valor <= 100) {
            this->valor = valor;
        }
        else {
            cout << "O valor deve ser num�rico e deve estar entre 0 e 100." << endl;
        }
    }
};

// D� pra melhorar adaptando o c�digo caso receba valores alpha.

#endif // PERCENTUAL_H_INCLUDED
