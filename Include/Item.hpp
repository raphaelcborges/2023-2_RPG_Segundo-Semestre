#ifndef ITEM_HPP
#define ITEM_HPP
#pragma once

#include <string>

class Item {
public:
    Item(std::string nome, int valorDeRegeneracao);
    std::string getNome();
    int getValorDeRegeneracao();

private:
    std::string nome;
    int valorDeRegeneracao;
};

#endif
