Batalha.hpp
#include <exception>

namespace exceptions {
    /**
     * @brief Exceção para número inválido.
     */

    class numero_invalido : public std::exception {
    public:


        const char* what() const throw() {
            return "Parece que voce ainda nao aprendeu os numeros direitinho, escolha um numero valido";
        }
    };

    /**
     * @brief Exceção para letra inválida.
     */
    class letra_invalida : public std::exception {
    public:

        const char* what() const throw() {
            return "Ops, parece que voce nao sabe a diferenca entre numeros e letras, tudo bem! Tente de novo (numero)\n";
        }
    };
}
