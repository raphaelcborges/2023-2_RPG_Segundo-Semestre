
#ifndef PROFCALCULO2_HPP
#define PROFCALCULO2_HPP

#include "Inimigo.hpp"

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Cálculo 2".
 * Herda da classe Inimigo.
 */

class ProfCalculo2 : public Inimigo {
    int _ataque;
public:
    ProfCalculo2(string nome);

    /**
     * @brief Função que representa o ataque do Professor de Cálculo 2.
     * @return Valor do ataque.
     */

    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Cálculo 2.
     */

    void falar() override;
};

#endif 
