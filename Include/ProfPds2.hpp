/**
 * @file ProfPDS2.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe ProfPDS2
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém a declaração da classe ProfPDS2, que é uma subclasse da classe Inimigo e 
 * representa um inimigo específico no jogo.
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PROFPDS2_HPP
#define PROFPDS2_HPP

#include "Inimigo.hpp"
#include <iostream>

/**
 * @brief Classe que representa um Inimigo do tipo "Professor de Projeto e Desenvolvimento de Sistemas 2".
 * @details A classe ProfPDS2 é uma subclasse de Inimigo e representa um tipo específico de inimigo no jogo. 
 * Ela implementa os métodos abstratos da classe base.
 */

class ProfPDS2: public Inimigo {
    int _ataque; /**< Valor do ataque do Professor de Projeto e Desenvolvimento de Sistemas 2. */
public:

    /**
     * @brief Construtor da classe ProfPDS2.
     * @details Este construtor inicializa um objeto ProfPDS2 com um nome fornecido. O nome identifica este 
     * inimigo específico no jogo. Além disso, inicializa o valor do atributo de ataque que será utilizado nos 
     * métodos de ataque.    
 */
    ProfPDS2(string nome);

    /**
     * @brief Função que representa o ataque do Professor de Projeto e Desenvolvimento de Sistemas 2.
     * @details Este método sobrescreve o método abstrato ataca da classe base Inimigo. Deve retornar a 
     * quantidade de dano causada pelo ataque de ProfPDS2.
     * @return Valor do ataque.
     */
    int ataca() override;

    /**
     * @brief Função que representa a fala do Professor de Projeto e Desenvolvimento de Sistemas 2.
     * @details Este método sobrescreve o método abstrato falar da classe base Inimigo. Deve imprimir alguma 
     * mensagem de ProfPDS2.
     */
    void falar() override;
};

#endif 
