#include "ProfessorAnaliseNum.hpp"

ProfessorAnaliseNum::ProfessorAnaliseNum(string nome) : OInimigo(nome) {
    this->_vida = 50;
    this->_ataque = 15;
}

int ProfessorAnaliseNum::ataca() {
    return _ataque;
}

void ProfessorAnaliseNum::falar() {
    int fala = numeroAleatorio();
    if (fala == 1) {
        cout << "Interpolação!\n" << endl;
    }
    else if (fala == 2) {
        cout << "Lagrange!\n" << endl;
    }
    else {
        cout << "Ajuste de Curvas!\n" << endl;
    }
}
