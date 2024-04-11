#include <iostream>
#include "Setor.h"
#include "Dinheiro.h"
#include "Estado.h"
#include "CodigoTitulo.h"
using namespace std;

int main() {
/*
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
*/
    CodigoTitulo codigo_titulo;
    string opr,codigo;
    cout << "Digite a operacao: ";
    cin >> opr;
    cout << "Digite o codigo: ";
    cin >> codigo;
    codigo_titulo.setCodigoTitulo(opr,codigo);
    cout << codigo_titulo.getCodigoTitulo();


    return 0;
}

