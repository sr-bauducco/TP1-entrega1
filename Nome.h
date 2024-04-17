#ifndef NOME_H_INCLUDED
#define NOME_H_INCLUDED
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

class Nome {
private:
    string valor;

    bool validarNome(const string& valor) {
        int termos = 0;
        istringstream iss(valor);
        string palavra;

        while (iss >> palavra) {
            ++termos;
            if (termos > 2 || palavra.length() < 3 || palavra.length() > 10 || !isupper(palavra[0])) {
                return false;
            }
            for (char c : palavra) {
                if (!isalpha(c)) {
                    return false;
                }
            }
        }
        return termos > 0;
    }

public:
    Nome() : valor("") {}

    void setNome(const string& valor) {
        if (validarNome(valor)) {
            this->valor = valor;
        }
    }

    string getNome() const {
        return valor;
    }
};

#endif // NOME_H_INCLUDED
