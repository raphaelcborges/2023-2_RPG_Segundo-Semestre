#ifndef ProfSD_HPP
#define ProfSD_HPP

#include "Inimigo.hpp"
#include <iostream>

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Sistemas Digitais".
 * Herda da classe Inimigo.
 */
class ProfSD : public Inimigo {
    int _ataque; /**< Valor do ataque do Professor de Sistemas Digitais. */

public:
    /**
     * @brief Construtor da classe ProfSD.
     * @param nome Nome do Professor de Sistemas Digitais.
     */
    ProfSD(string nome);

    /**
     * @brief Função que representa o ataque do Professor de Sistemas Digitais.
     * @return Valor do ataque.
     */
    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Sistemas Digitais.
     */
    void falar() override;
};

#endif
