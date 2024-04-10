#include <iostream>
#include "Setor.h"
using namespace std;

int main() {
    string valor;
    Setor setor;
    cin >> valor;
    std::string nomeSetor = valor;
    if (setor.setNome(nomeSetor)) {
        cout << setor.getNome();
    } else {
         cout << "Invalido \n";
    }

    return 0;
}
