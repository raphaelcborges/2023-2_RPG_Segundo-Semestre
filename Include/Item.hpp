#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

/**
 * @brief Classe para representar um Item.
 */
class Item {
public:
    /**
     * @brief Construtor da classe Item.
     * @param nome Nome do Item.
     * @param valorDeRegeneracao Valor de regeneração de vida/NSG.
     */
    Item(std::string nome, int valorDeRegeneracao);

    /**
     * @brief Retorna o nome do Item.
     * @return Nome do Item.
     */
    std::string getNome();

    /**
     * @brief Retorna o valor de regeneração do Item.
     * @return Valor de regeneração.
     */
    int getValorDeRegeneracao();

private:
    std::string nome; /**< Nome do Item. */
    int valorDeRegeneracao; /**< Valor de regeneração de vida/NSG do Item. */
};

#endif

