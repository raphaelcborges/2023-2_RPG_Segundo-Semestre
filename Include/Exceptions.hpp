/**
 * @file Exceptions.hpp
 * @author grupo
 * @brief Arquivo de cabeçalho para as classes de exceções personalizadas
 * @version 0.1
 * @date 2023-12-04
 * @details Este arquivo define classes para exceções personalizadas que são lançadas quando
 * ocorrem certos tipos de erros no programa.
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <exception>
   /**
   * @brief Classe para as excessões
   * 
   */
namespace exceptions {
    /**
     * @brief Exceção lançada quando um número inválido é fornecido
     * @details Esta classe de exceção é lançada quando um número fornecido não está dentro dos parâmetros determinados.
     */

    class numero_invalido : public std::exception {
    public:

        /**
         * @brief Retorna uma mensagem de erro específica para esta exceção
         * 
         * @return const char* 
         */
        const char* what() const throw() {
            return "Parece que voce ainda nao aprendeu os numeros direitinho, escolha um numero valido";
        }
    };

     /**
     * @brief Exceção lançada quando uma letra inválida é fornecida
     * @details Esta classe de exceção é lançada quando uma string ou um char é fornecido ao invés de um valor inteiro.
     * 
     */
    class letra_invalida : public std::exception {
    public:
        /**
         * @brief Retorna uma mensagem de erro específica para esta exceção
         * 
         * @return const char* 
         */

        const char* what() const throw() {
            return "Ops, parece que voce nao sabe a diferenca entre numeros e letras, tudo bem! Tente de novo (numero)\n";
        }
    };
}
