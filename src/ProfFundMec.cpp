#include "ProfFundMec.hpp"

ProfFundMec::ProfFundMec(string nome) : Inimigo(nome) {
    this->_vida = 40;
    this->_ataque = 10;
}

int ProfFundMec::ataca() {
    return _ataque;
}

void ProfFundMec::falar() {
    int fala = numeroAleatorio();
    if (fala == 1) {
        cout << "Maça de Newton!\n" << endl;
    }
    else if (fala == 2) {
        cout << "Conservacao de Energia!\n" << endl;
    }
    else {
        cout << "Rotacao!\n" << endl;
    }
}
