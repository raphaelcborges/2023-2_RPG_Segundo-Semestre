#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP

#include <iostream>
#include "Item.hpp"
#include <vector>

/**
 * @brief Classe para representar um Personagem.
 */
class Personagem {
    std::string _nome; /**< Nome do Personagem. */
    int _vida; /**< Vida do Personagem. */
    int _vida_maxima; /**< Vida máxima do Personagem. */
    int _ataque1; /**< Ataque 1 do Personagem. */
    int _ataque2; /**< Ataque 2 do Personagem. */
    std::vector<Item> inventario; /**< Vetor de Itens no inventário do Personagem. */

public:
    /**
     * @brief Construtor da classe Personagem.
     * @param nome Nome do Personagem.
     */
    Personagem(std::string nome);

    /**
     * @brief Função para reduzir a vida do Personagem.
     * @param dano Valor do dano a ser aplicado.
     */
    void recebeDano(int dano);

    /**
     * @brief Imprime informações do Personagem.
     */
    void printInfo();

    /**
     * @brief Função para realizar um ataque com base no número escolhido.
     * @param escolha Escolha do jogador (1 ou 2).
     * @return Valor do dano causado.
     */
    int ataca(int escolha);

    /**
     * @brief Função para adicionar um Item ao inventário do Personagem.
     * @param item Item a ser adicionado.
     */
    void adicionarItem(Item item);

    /**
     * @brief Função para usar um Item do inventário e regenerar vida.
     * @param index Índice do Item a ser usado.
     * @return Valor de regeneração de vida.
     */
    int usarItem(int index);

    /**
     * @brief Verifica se o Personagem está vivo.
     * @return true se estiver vivo, false caso contrário.
     */
    bool estaVivo();

    /**
     * @brief Retorna o nome do Personagem.
     * @return Nome do Personagem.
     */
    std::string getNome();
};

#endif
