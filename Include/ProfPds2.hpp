#ifndef PROFPDS_HPP
#define PROFPDS_HPP

#include "Inimigo.hpp"
#include <iostream>

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Projeto e Desenvolvimento de Sistemas 2".
 * Herda da classe Inimigo.
 */
class ProfPDS2 : public Inimigo {
    int _ataque; /**< Valor do ataque do Professor de Projeto e Desenvolvimento de Sistemas 2. */

public:
    /**
     * @brief Construtor da classe ProfPDS2.
     * @param nome Nome do Professor de Projeto e Desenvolvimento de Sistemas 2.
     */
    ProfPDS2(string nome);

    /**
     * @brief Função que representa o ataque do Professor de Projeto e Desenvolvimento de Sistemas 2.
     * @return Valor do ataque.
     */
    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Projeto e Desenvolvimento de Sistemas 2.
     */
    void falar() override;
};

#endif
