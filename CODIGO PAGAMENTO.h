#ifndef CODIGO_PAGAMENTO_H_INCLUDED
#define CODIGO_PAGAMENTO_H_INCLUDED
#include <iostream>
using namespace std;

class CodigoPagamento {
private:
    string valor;
    bool validacao;
    bool validarCodigo(string valor) {
        int k = 0;
        if (k == 0 && valor[0] == '0') {
            validacao = false;
            return false;
        }
        for (char c: valor) {
            if (isalpha(c)) {
                validacao = false;
                return false;
            }
            k++;
        }
        if (k != 8) {
            validacao = false;
            return false;
        }
        else {
            validacao = true;
            return true;
        }
    }

public:
    CodigoPagamento() {
        valor = "";
    }

    void setCodigo(string valor) {
        if (validarCodigo(valor)) {
            this->valor = valor;
        }
    }

    string getCodigo() {
        if (validacao) {
            return valor;
        }
        else {
            string mensagem = "Por favor, digite um valor de codigo valido";
            return mensagem;
        }
    }
};

#endif // CODIGO_PAGAMENTO_H_INCLUDED
