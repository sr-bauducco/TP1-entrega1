#include <iostream>
#include "Setor.h" // Incluindo o arquivo de cabeçalho da classe Setor

int main() {
    // Criando um objeto da classe Setor
    Setor setor;

    // Definindo o nome do setor usando o método setNome()
    std::string nomeSetor = "Energia";
    if (setor.setNome(nomeSetor)) {
        std::cout << "Nome do setor definido com sucesso: " << setor.getNome() << std::endl;
    } else {
        std::cout << "Erro ao definir o nome do setor." << std::endl;
    }

    // Tentando definir um nome inválido para o setor
    nomeSetor = "Saúde";
    if (setor.setNome(nomeSetor)) {
        std::cout << "Nome do setor definido com sucesso: " << setor.getNome() << std::endl;
    } else {
        std::cout << "Erro ao definir o nome do setor." << std::endl;
    }

    return 0;
}
