#include "ProfSistemasDigitais.hpp"

ProfSD::ProfSD(string nome) : Inimigo(nome) {
    this->_vida = 30;
    this->_ataque = 6;
}

int ProfSD::ataca() {
    return _ataque;
}

void ProfSD::falar() {
    int fala = numeroAleatorio();
    if (fala == 1) {
        cout << "Projeto Lógico Combinacional!\n" << endl;
    }
    else if (fala == 2) {
        cout << "Maquina de Estados Finitos!\n" << endl;
    }
    else {
        cout << "Unidade lógica aritmética!\n" << endl;
    }
}
