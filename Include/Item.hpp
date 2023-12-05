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
 * @brief Classe que representa um item no jogo
 * @details A classe Item representa um item no jogo que pode ser usado pelo jogador. Cada item possui um nome 
 * e um valor de regeneração que indica quanto de vida pode ser restaurado ao usar o item.
 */
class Item {
public:
    /**
     * @brief Construtor da classe Item.
     * @details Este construtor inicializa um objeto Item com um nome e um valor de regeneração fornecidos. 
     * O nome identifica o item e o valor de regeneração indica a quantidade de vida que pode ser restaurada 
     * ao usar o item.
     * 
     * @param nome 
     * @param valorDeRegeneracao 
     */
    Item(std::string nome, int valorDeRegeneracao);
    /**
     * @brief Retorna o nome do item
     * @details Este método retorna o nome do item que é uma string.
     * 
     * @return std::string 
     */
    std::string getNome();
    /**
     * @brief Retorna o valor de regeneração do item
     * @details Este método retorna o valor de regeneração do item que é um inteiro representando a quantidade 
     * de vida que pode ser restaurada ao usar o item.
     * 
     * @return int 
     */
    int getValorDeRegeneracao();

private:
    std::string nome;/**< Nome do Item. */
    int valorDeRegeneracao;/**< Valor de regeneração de vida/NSG do Item. */
};

#endif

