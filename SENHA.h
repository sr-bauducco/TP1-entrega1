#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED
#include <iostream>
using namespace std;

class Senha {
private:
    string valor = "";
    bool verificador;
    bool formatoSenha(string valor) {
        if (valor.size() == 6){
            char atual = valor[0];
            int cont = 0;
            for (char c: valor) {
                if (isalpha(c)) {
                    verificador = false;
                    return false;
                }
                int k = 0;
                for (char j: valor) {
                    if (j == c ) {
                        k++;
                        if (k > 1){
                            verificador = false;
                            return false;
                        }
                    }
                }
                if (c > atual) {
                    atual = c;
                    cont++;
                }
                else if (c < atual) {
                    atual = c;
                    cont--;
                    }
                }
                if (cont == 5 || cont == -5) {
                verificador = false;
                return false;
            }
        }
        else {
            verificador = false;
            return false;
        }
        verificador = true;
        return true;
    }

public:
    Senha() {
        setSenha(valor);
        }

    string getSenha() {
        if (verificador) {
            return valor;
        }
        else {
            cout << "Por favor, digite uma senha valida antes!" << endl;
        }
    }

    void setSenha(string valor) {
        if (formatoSenha(valor)) {
            this->valor = valor;
        }
    }
    };


#endif // SENHA_H_INCLUDED
