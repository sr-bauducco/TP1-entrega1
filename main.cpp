#include <iostream>
#include "Setor.h"
#include "Dinheiro.h"
using namespace std;

int main() {

    string valor;
    Setor setor;
    cout <<"Digite o Setor que deseja:";
    cin >> valor;
    std::string nomeSetor = valor;
    if (setor.setNome(nomeSetor)) {
        cout << setor.getNome();
    } else {
         cout << "Invalido \n";
         }


    int valorDinheiro;
    cout << "digite o valor do dinheiro";
    cin >> valorDinheiro;
    Dinheiro dinheiro;
    dinheiro.setValor(valorDinheiro);
    dinheiro.imprimir();


    return 0;
}

