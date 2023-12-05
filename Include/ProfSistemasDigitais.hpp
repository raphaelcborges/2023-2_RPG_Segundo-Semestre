/**
 * @file ProfSD.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe ProfSD
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe ProfSD, que é uma subclasse da classe Inimigo e representa um inimigo específico no jogo.
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ProfSD_HPP
#define ProfSD_HPP

#include "Inimigo.hpp"
#include <iostream>

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Sistemas Digitais".
 * @details A classe ProfSD é uma subclasse de Inimigo e representa um tipo específico de inimigo no jogo. Ela implementa os métodos abstratos da classe base.
 */

class ProfSD : public Inimigo {
    int _ataque; /**< Valor do ataque do Professor de Sistemas Digitais. */
public:
    /**
     * @brief Construtor da classe ProfSD.
     * @details Este construtor inicializa um objeto ProfSD com um nome fornecido. O nome identifica este 
     * inimigo específico no jogo. Além disso, inicializa o valor do atributo de ataque que será utilizado nos 
     * métodos de ataque.    
 */
    ProfSD(string nome);

    /**
     * @brief Função que representa o ataque do Professor de Sistemas Digitais.
     * @details Este método sobrescreve o método abstrato ataca da classe base Inimigo. Deve retornar a quantidade de dano causada pelo ataque de ProfSD.
     * @return Valor do ataque.
     */
    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Sistemas Digitais.
     * @details Este método sobrescreve o método abstrato falar da classe base Inimigo. Deve imprimir alguma forma de mensagem de ProfSD.

     */
    void falar() override;
};

#endif 
