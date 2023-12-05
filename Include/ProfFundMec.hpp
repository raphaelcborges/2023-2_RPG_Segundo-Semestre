/**
 * @file ProfFundMec.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe ProfFundMec
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe ProfFundMec, que é uma subclasse da classe Inimigo e representa um inimigo específico no jogo.
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef PROFFUNDMEC_HPP
#define PROFFUNDMEC_HPP

#include "Inimigo.hpp"
#include <iostream>

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Fundamentos Mecânicos".
 * Herda da classe Inimigo.
 */

class ProfFundMec : public Inimigo {
    int _ataque;/**< Valor do ataque do Professor de Fundamentos Mecânicos. */
public:
    /**
     * @brief Construtor da classe ProfFundMec.
     * @param nome Nome do Professor de Fundamentos Mecânicos.
     */

    ProfFundMec(string nome);
    /**
     * @brief Função que representa o ataque do Professor de Fundamentos Mecânicos.
     * @return Valor do ataque.
     */
    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Fundamentos Mecânicos.
     */
    void falar() override;
};

#endif 
