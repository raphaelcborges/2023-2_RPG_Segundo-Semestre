#ifndef BATALHA_HPP
#define BATALHA_HPP

#include "Personagem.hpp"
#include "Inimigo.hpp"

/**
 * @brief Classe que representa uma batalha entre um Personagem e um Inimigo.
 */
class Batalha {
    Personagem* personagem; /**< Ponteiro para o Personagem. */
    Inimigo* inimigo; /**< Ponteiro para o Inimigo. */

public:
/**
     * @brief Construtor da classe Batalha.
     * @param personagem Ponteiro para o Personagem.
     * @param inimigo Ponteiro para o Inimigo.
     */
    Batalha(Personagem* personagem, Inimigo* inimigo);
/**
     * @brief Executa um turno da batalha com base na escolha do jogador.
     * @param escolha Escolha do jogador (1 ou 2).
     */
    void executaTurno(int escolha);
/**
     * @brief Verifica se a batalha terminou.
     * @return true se a batalha terminou, false caso contrário.
     */
    bool terminou();
/**
     * @brief Executa o turno do Inimigo.
     */
    void executaTurnoInimigo();
};

#endif
