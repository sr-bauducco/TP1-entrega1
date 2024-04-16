#ifndef CPF_H_INCLUDED
#define CPF_H_INCLUDED
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class CPF {
private:
    string numeros;
    bool validarCPF(string cpf) {
        cpf = formatoCPF(cpf);
        if (cpf == "") {
            cout << "CPF invalido" << endl;
            return false;
        }
        stringstream verificado1;
        string ultimoscpf = cpf.substr(cpf.size() - 2);
        if (cpf.size() == 11) {
            for(int j = 0; j < 2; ++j){
                int i = 0;
                int k = 0;
                int l = 0;
                if(j == 0) {
                    for(char& c : cpf) {
                        if (i < 9) {
                            int numero = c - '0';
                            k += (10 - i) * numero;
                            ++i;
                        }
                        else {
                            l = (k * 10) % 11;
                            if (l != 10) {
                                verificado1 << l;
                                break;
                            }
                            else {
                                verificado1 << 0;
                                break;
                            }
                        }
                    }
                }
                else {
                    for(char& c : cpf) {
                        if (i < 10) {
                            int numero = c - '0';
                            k += (11 - i) * numero;
                            ++i;
                        }
                        else {
                            l = (k * 10) % 11;
                            if (l != 10) {
                                verificado1 << l;
                                break;
                            }
                            else {
                                verificado1 << 0;
                                break;
                            }
                        }
                    }
                }
            }
            if (verificado1.str() == ultimoscpf){
                cout << "CPF valido" << endl;
                return true;
            }
            else {
                cout << "CPF invalido" << endl;
                return false;
            }
        }
        else {
            cout << "CPF invalido" << endl;
            return false;
        }
    }
public:
    CPF(string numeros = "") {
        //setCPF(numeros);
        this->numeros = numeros;
    }

    bool setCPF(string numeros) {
        if (validarCPF(numeros)) {
            this->numeros = numeros;
            return true;
        }
        else{
            return false;
        }
    }

    bool getCPF() {
        if (numeros != "") {
            cout << numeros << endl;
            return true;
        }
        else {
            cout << "Nao temos um cpf definido" << endl;
            return false;
        }
    }

    string formatoCPF(string numeros) {
        string cpf;
        for(char& c : numeros) {
            if (isdigit(c)) {
                cpf = cpf + c;
            }
            else if(isalpha(c)) {
                return "";
            }
        }
        return cpf;
    }
};

#endif // CPF_H_INCLUDED
