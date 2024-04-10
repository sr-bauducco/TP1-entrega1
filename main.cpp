#include <iostream>
#include "Setor.h"
#include "Dinheiro.h"
#include "Estado.h"
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


    Estado estado;
    cout << "digite o estado:";
    string estadoAtual;
    cin >> estadoAtual;
    estado.setEstado(estadoAtual);
    cout << estado.getEstado();


    return 0;
}

