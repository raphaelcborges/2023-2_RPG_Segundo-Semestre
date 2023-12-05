#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP
#include <iostream>
#include "Item.hpp"
#include <vector>

using namespace std;

/**
 * @brief Classe para representar um Personagem.
 */
class Personagem {
    string _nome; /**< Nome do Personagem. */
    int _vida = 100; /**< Vida do Personagem. */
    int _vida_maxima = 100;/**< Vida máxima do Personagem. */
    int _ataque1 = 27;/**< Ataque 1 do Personagem. */
    int _ataque2 = 25;/**< Ataque 2 do Personagem. */
    std::vector<Item> inventario; /**< Vetor de Itens no inventário do Personagem. */

public:
    /**
     * @brief Construtor da classe Personagem.
     * @param nome Nome do Personagem.
     */
    Personagem(string nome);
    /**
     * @brief Função para reduzir a vida do Personagem.
     * @param dano Valor do dano a ser aplicado.
     */
    void recebeDano(int dano);
    /**
     * @brief Função para realizar um ataque com base no número escolhido.
     * @param escolha Escolha do jogador (1 ou 2).
     * @return Valor do dano causado.
     */
    int ataca(int tipo);
    /**
     * @brief Verifica se o Personagem está vivo.
     * @return true se estiver vivo, false caso contrário.
     */
    bool estaVivo();
    /**
     * @brief Definir o nome do Personagem.
     * @param nome Nome do Personagem.
     */
    void definirNome(string nome);
    /**
     * @brief Retorna o nome do Personagem.
     * @return Nome do Personagem.
     */
    string getNome();
    /**
     * @brief Função para adicionar um Item ao inventário do Personagem.
     * @param item Item a ser adicionado.
     */
    void addItem(Item item);
    /**
     * @brief Função para usar um Item do inventário e regenerar vida.
     * @param index Índice do Item a ser usado.
     * @return Valor de regeneração de vida.
     */
    void usarItem(int indiceItem);
    /**
     * @brief Exibe o vetor Inventário.
     */
    std::vector<Item>& getInventario();
    /**
     * @brief Exibir o Inventário do Personagem.
     * @return Inventário.
     */
    void exibirInventario();
    /**
     * @brief Exibir o NSG do Personagem.
     * @return NSG.
     */
    void printInfo();
    /**
     * @brief Exibir a vida atual do Personagem.
     * @return Vida atual.
     */
    int getVida();
};

#endif
