/**
 * @file Inimigo.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para a classe Inimigo
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo contém as declarações para a classe Inimigo, que representa um inimigo genérico em um jogo. 
 * A classe Inimigo é abstrata, ou seja, não pode ser instanciada diretamente.
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <iostream>

using namespace std;

/**
 * @brief Classe base para Inimigos.
 */
class Inimigo {
protected:
    string _nome;/**< Nome do Inimigo. */
    int _vida;/**< Vida do Inimigo. */
    int _ataque;/**< Ataque do Inimigo. */

public:

    /**
     * @brief Construtor da classe Inimigo.
     * @param nome Nome do Inimigo.
     */
    Inimigo (string nome);

    /**
     * @brief Função para reduzir a vida do Inimigo.
     * @param dano Valor do dano a ser aplicado.
     */
    void recebeDano(int dano);

    /**
     * @brief Verifica se o Inimigo está vivo.
     * @return true se estiver vivo, false caso contrário.
     */
    bool estaVivo();

    /**
     * @brief Imprime o nome do Personagem e o NSG.
     */
    void printInfo();

    /**
     * @brief Retorna o ataque do Inimigo.
     * @return Valor do ataque.
     */
    int getAtaque();

    /**
     * @brief Retorna o nome do Inimigo.
     * @return Nome do Inimigo.
     */
    string getNome();

    /**
     * @brief Função puramente virtual para o ataque do Inimigo.
     * @return Valor do ataque.
     */
    virtual int ataca() = 0;

    /**
     * @brief Função puramente virtual para a fala do Inimigo.
     */
    virtual void falar() = 0;

    /**
     * @brief Função para gerar número aleatório de 1 a 3.
     * @return Número aleatório.
     */
    int numeroAleatorio();
};

#endif
