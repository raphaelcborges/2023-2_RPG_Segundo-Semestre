
#ifndef PROFANALNUMERICA_HPP
#define PROFANALNUMERICA_HPP

#include "Inimigo.hpp"
#include <iostream>

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Análise Numérica".
 * Herda da classe Inimigo.
 */

class ProfAnalNumerica : public Inimigo {
    int _ataque; /**< Valor do ataque do Professor de Análise Numérica. */
public:
    /**
     * @brief Construtor da classe ProfAnalNumerica.
     * @param nome Nome do Professor de Análise Numérica.
     */
    ProfAnalNumerica(string nome);
    
/**
     * @brief Função que representa o ataque do Professor de Análise Numérica.
     * @return Valor do ataque.
     */
    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Análise Numérica.
     */
    void falar() override;
};

#endif 
