#include "ProfAnalNumerica.hpp"

ProfAnalNumerica::ProfAnalNumerica(string nome) : Inimigo(nome) {
    this->_vida = 50;
    this->_ataque = 15;
}

int ProfAnalNumerica::ataca() {
    return _ataque;
}

void ProfAnalNumerica::falar() {
    int fala = numeroAleatorio();
    if (fala == 1) {
        cout << "Matrizes!\n" << endl;
    }
    else if (fala == 2) {
        cout << "Interpolação\n" << endl;
    }
    else {
        cout << "Pégaso!\n" << endl;
    }
}
