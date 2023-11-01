#include "ProfessorPDS.hpp"

ProfessorPDS::ProfessorPDS(string nome) : Inimigo(nome) {
    this->_vida = 60;
    this->_ataque = 8;
}

int ProfessorPDS::ataca() {
    return _ataque;
}

void ProfessorPDS::falar() {
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
