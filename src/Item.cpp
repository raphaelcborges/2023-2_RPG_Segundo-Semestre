#include "Item.hpp"

Item::Item(std::string nome, int valorDeRegeneracao) : nome(nome), valorDeRegeneracao(valorDeRegeneracao) {}

std::string Item::getNome() {
    return nome;
}

int Item::getValorDeRegeneracao() {
    return valorDeRegeneracao;
}
