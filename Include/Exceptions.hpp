#include <exception>

namespace exceptions {

    /**
     * @brief Exceção para número inválido.
     */
    class numero_invalido : public std::exception {
    public:

        const char* what() const throw() {
            return "Parece que você ainda não aprendeu os números direitinho, escolha um número válido";
        }
    };

    /**
     * @brief Exceção para letra inválida.
     */
    class letra_invalida : public std::exception {
    public:

        const char* what() const throw() {
            return "Ops, parece que você não sabe a diferença entre números e letras, tudo bem! Tente de novo (número)\n";
        }
    };
}

