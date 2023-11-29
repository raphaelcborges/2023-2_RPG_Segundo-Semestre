#include "ProfPds2.hpp"

ProfPDS2::ProfPDS2(string nome) : Inimigo(nome) {
    this->_vida = 60;
    this->_ataque = 8;
}

int ProfPDS2::ataca() {
    return _ataque;
}

void ProfPDS2::falar() {
    int fala = numeroAleatorio();
    if (fala == 1) {
        cout << "C++!\n" << endl;
    }
    else if (fala == 2) {
        cout << "Polimorfismo!\n" << endl;
    }
    else {
        cout << "Programacao orientada a objetos!\n" << endl;
    }
}
