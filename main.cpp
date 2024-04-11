#include <iostream>
#include "Setor.h"
#include "Dinheiro.h"
#include "Estado.h"
#include "CodigoTitulo.h"
#include "Data.h"
using namespace std;

int main() {
    try {
        Data data("29-02-2024");
        std::cout << "Data valida: " << data.getData() << std::endl;
    } catch (std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }


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

    CodigoTitulo codigo_titulo;
    string opr,codigo;
    cout << "Digite a operacao: ";
    cin >> opr;
    cout << "Digite o codigo: ";
    cin >> codigo;
    codigo_titulo.setCodigoTitulo("CDB","123456789");
    cout << "" + codigo_titulo.getCodigoTitulo();


    return 0;
}

