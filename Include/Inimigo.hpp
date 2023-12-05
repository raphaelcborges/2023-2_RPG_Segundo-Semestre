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
 * @brief Classe abstrata representando um inimigo genérico.
 * @details Esta classe contém atributos e métodos que todos os inimigos do jogo devem ter.
 */
class Inimigo {
protected:
    string _nome;/**< Nome do Inimigo. */
    int _vida;/**< Vida do Inimigo. */
    int _ataque;/**< Ataque do Inimigo. */

public:

    /**
     * @brief Construtor da classe Inimigo.
     * @details Este construtor inicializa um objeto Inimigo com um nome fornecido, vida e ataque são 
     * inicializados com valores padrão.
     * 
     * @param nome 
     */
    Inimigo (string nome);

    /**
     * @brief Reduz a vida do inimigo por uma quantidade determinada de dano. 
     * @details Este método recebe um inteiro representando o dano e subtrai da vida do inimigo.
     * 
     * @param dano A quantidade de dano a ser subtraída das vidas do inimigo.
     * @return * void 
     */
    void recebeDano(int dano);

    /**
     * @brief Verifica se o inimigo está vivo.
     * @details Este método retorna um valor booleano indicando se o inimigo está vivo (ou seja, tem vida maior que 0).
     * 
     * @return true
     * @return false
     */
    bool estaVivo();

    /**
     * @brief Imprime as informações do inimigo.
     * @details Este método imprime o nome, a vida e o poder de ataque do inimigo na saída padrão.
     */
    void printInfo();

    /**
     * @brief Retorna o poder de ataque do inimigo.
     * @details Este método é um getter para o atributo _ataque
     * 
     * @return int 
     */
    int getAtaque();

    /**
     * @brief Retorna o nome do inimigo.
     * @details Este método é um getter para o atributo _nome.
     * 
     * @return string 
     */
    string getNome();

    /**
     * @brief Método abstrato para a ação de ataque do inimigo.
     * @details Este método deve ser implementado pelas classes derivadas. Ele deve retornar a quantidade de dano causada pelo ataque do inimigo.
     * 
     * @return int 
     */
    virtual int ataca() = 0;

    /**
     * @brief Método abstrato para a ação de diálogo do inimigo.
     * @details Este método deve ser implementado pelas classes derivadas. Ele deve imprimir alguma forma de mensagem.
     */
    virtual void falar() = 0;

      /**
     * @brief Gera um número aleatório entre 1 e 3.
     * @details Este método gera um numero aleatorio para escolher qual das falas o inimigo irá falar quando for atacar.
     * 
     * @return int 
     */
    int numeroAleatorio();
};

#endif
