/**
 * @file ProfCalculo2.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe ProfCalculo2
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe ProfCalculo2, que é uma subclasse da classe Inimigo e representa um inimigo específico no jogo.
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PROFCALCULO2_HPP
#define PROFCALCULO2_HPP

#include "Inimigo.hpp"

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Cálculo 2".
 * @details A classe ProfCalculo2 é uma subclasse de Inimigo e representa um tipo específico de inimigo no jogo. Ela implementa os métodos abstratos da classe base.
*/

class ProfCalculo2 : public Inimigo {
    int _ataque;
public:

    /**
     * @brief Construtor da classe ProfCalculo2.
     * @details Este construtor inicializa um objeto ProfCalculo2 com um nome fornecido. O nome identifica este 
     * inimigo específico no jogo. Além disso, inicializa o valor do atributo de ataque que será utilizado nos 
     * métodos de ataque.
     * 
     * @param nome 
     */

    ProfCalculo2(string nome);

    /**
     * @brief Função que representa o ataque do Professor de Cálculo 2.
     * @details Este método sobrescreve o método abstrato ataca da classe base Inimigo. Deve retornar a quantidade de dano causada pelo ataque de ProfCalculo2.
 * @return Valor do ataque.
     */

    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Cálculo 2.
     * @details Este método sobrescreve o método abstrato falar da classe base Inimigo. Deve imprimir alguma fala de ProfCalculo2.

     */

    void falar() override;
};

#endif 
