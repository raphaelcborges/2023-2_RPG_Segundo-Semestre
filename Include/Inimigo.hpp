#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <iostream>

/**
 * @brief Classe base para Inimigos.
 */
class Inimigo {
protected:
    std::string _nome; /**< Nome do Inimigo. */
    int _vida; /**< Vida do Inimigo. */
    int _ataque; /**< Ataque do Inimigo. */

public:
    /**
     * @brief Construtor da classe Inimigo.
     * @param nome Nome do Inimigo.
     */
    Inimigo(std::string nome);

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
     * @brief Imprime informações do Inimigo.
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
    std::string getNome();

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

