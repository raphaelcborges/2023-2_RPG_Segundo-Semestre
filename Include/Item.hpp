/**
 * @file Item.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe Item
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe Item, que representa um item que pode ser usado no jogo. 
 * Cada item possui um nome e um valor de regeneração.
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef ITEM_HPP
#define ITEM_HPP
#pragma once

#include <string>

/**
 * @brief Classe para representar um Item.
 */
class Item {
public:
    /**
     * @brief Construtor da classe Item.
     * @param nome Nome do Item.
     * @param valorDeRegeneracao Valor de regeneração de vida/NSG.
     */
    Item(std::string nome, int valorDeRegeneracao);
    /**
     * @brief Retorna o nome do Item.
     * @return Nome do Item.
     */
    std::string getNome();
    /**
     * @brief Retorna o valor de regeneração do Item.
     * @return Valor de regeneração.
     */
    int getValorDeRegeneracao();

private:
    std::string nome;/**< Nome do Item. */
    int valorDeRegeneracao;/**< Valor de regeneração de vida/NSG do Item. */
};

#endif

