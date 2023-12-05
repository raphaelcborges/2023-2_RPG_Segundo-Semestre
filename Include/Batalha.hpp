/**
 * @file Batalha.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe Batalha
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe Batalha, que é responsável por gerenciar uma batalha entre um personagem e um inimigo no jogo.
 * 
 * @copyright Copyright (c) 2023
 */
#ifndef BATALHA_HPP
#define BATALHA_HPP

#include "Personagem.hpp"
#include "Inimigo.hpp"

/**
 * @brief Classe que representa uma batalha no jogo
 * @details A classe Batalha representa uma batalha entre um personagem e um inimigo. Ela contém métodos para executar um turno de batalha para o personagem e o inimigo, bem como para verificar se a batalha terminou.
 */
class Batalha {
    Personagem* personagem; /**< Ponteiro para o Personagem. */
    Inimigo* inimigo; /**< Ponteiro para o Inimigo. */

public:
/**
     * @brief Construtor da classe Batalha.
     * @details Este construtor inicializa um objeto Batalha com um personagem e um inimigo fornecidos. Esses 
     * serão os dois participantes da batalha.
     * 
     * 
     * @param personagem 
     * @param inimigo 
     */
    Batalha(Personagem* personagem, Inimigo* inimigo);
/**
     * @brief Executa um turno de batalha para o personagem
     * @details Este método recebe a escolha do jogador para o turno e executa a ação correspondente para o personagem.
     * 
     * @param escolha 
     */
    void executaTurno(int escolha);
 /**
     * @brief Verifica se a batalha terminou
     * @details Este método verifica se a batalha terminou, seja porque o personagem perdeu toda a vida, seja porque o inimigo perdeu toda a vida.
     * 
     * @return true 
     * @return false 
     */
    bool terminou();
    /**
     * @brief Executa um turno de batalha para o inimigo
     * @details Este método executa uma ação para o inimigo no turno dele, que geralmente envolve atacar o personagem.
     */
    void executaTurnoInimigo();
};

#endif
