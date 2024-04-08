#include <iostream>
#include "Setor.h" // Incluindo o arquivo de cabe�alho da classe Setor

int main() {
    // Criando um objeto da classe Setor
    Setor setor;

    // Definindo o nome do setor usando o m�todo setNome()
    std::string nomeSetor = "Energia";
    if (setor.setNome(nomeSetor)) {
        std::cout << "Nome do setor definido com sucesso: " << setor.getNome() << std::endl;
    } else {
        std::cout << "Erro ao definir o nome do setor." << std::endl;
    }

    // Tentando definir um nome inv�lido para o setor
    nomeSetor = "Sa�de";
    if (setor.setNome(nomeSetor)) {
        std::cout << "Nome do setor definido com sucesso: " << setor.getNome() << std::endl;
    } else {
        std::cout << "Erro ao definir o nome do setor." << std::endl;
    }

    return 0;
}
