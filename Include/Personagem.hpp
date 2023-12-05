/**
 * @file Personagem.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe Personagem
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe Personagem, que é usada para representar um personagem
 *  controlado pelo jogador no jogo.
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP
#include <iostream>
#include "Item.hpp"
#include <vector>

using namespace std;

/**
 * @brief Classe para representar uma personagem no jogo
 * @details Essa classe contém a implementação de um personagem em um jogo. Possui métodos para manipular
 * a vida do personagem, realizar ataques, gerenciar o inventário e obter informações do personagem.
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
     * @details Este construtor inicializa um objeto Personagem com um nome fornecido. A vida é inicializada 
     * em 100, assim como a vida máxima. Os valores de ataque também são inicializados, bem como o inventário é criado vazio.
     * 
     * @param nome 
     */
    Personagem(string nome);

    /**
     * @brief Faz o personagem receber dano
     * @details Este método diminui a vida do personagem de acordo com a quantidade de dano recebido.
     * 
     * @param dano 
     */
    void recebeDano(int dano);

    /**
     * @brief Faz o personagem atacar
     * @details Este método retorna a quantidade de dano que o personagem causa, baseado no tipo de ataque escolhido.
     * 
     * @param tipo 
     * @return int 
     */
    int ataca(int tipo);

    /**
     * @brief Verifica se o personagem está vivo
     * @details Este método verifica se o personagem ainda tem vida, ou seja, se a quantidade de vida dele 
     * é maior do que zero.
     * 
     * @return true 
     * @return false 
     */
    bool estaVivo();

    /**
     * @brief Define o nome do personagem
     * @details Este método recebe uma string e atribui esse valor ao nome do personagem.
     * 
     * @param nome 
     */
    void definirNome(string nome);

    /**
     * @brief Obtém o nome do personagem
     * @details Este método retorna o nome atual do personagem.
     * 
     * @return string 
     */
    string getNome();

    /**
     * @brief Adiciona um item ao inventário do personagem
     * @details Este método recebe um objeto do tipo Item e o adiciona ao vetor do inventário do personagem.
     * 
     * @param item 
     */
    void addItem(Item item);

    /**
     * @brief Usa um item do inventário do personagem
     * @details Este método recebe um índice que corresponde à posição de um item no vetor do inventário 
     * e "usa" esse item, normalmente afetando algum estado do personagem.
     * 
     * @param indiceItem 
     */
    void usarItem(int indiceItem);

    /**
     * @brief Obtém o inventário do personagem
     * @details Este método retorna uma referência ao vetor do inventário do personagem, permitindo que se 
     * tenha acesso aos itens que o personagem possui.
     * 
     * @return std::vector<Item>& 
     */
    std::vector<Item>& getInventario();

    /**
     * @brief Exibe o inventário do personagem
     * @details Este método imprime na saída padrão todos os itens presentes no vetor do inventário do 
     * personagem, geralmente com informações como o nome e o efeito de cada item.
     */
    void exibirInventario();

    /**
     * @brief Imprime as informações do personagem
     * @details Este método imprime na saída padrão informações sobre o personagem, como o nome, a quantidade 
     * de vida, o inventário, etc.
     */
    void printInfo();

    /**
     * @brief Obtém a quantidade de vida do personagem
     * @details Este método retorna a quantidade atual de vida do personagem.
     * 
     * @return int 
     */
    int getVida();
};

#endif
