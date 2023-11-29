#include "ProfCalculo2.hpp"

ProfCalculo2::ProfCalculo2(string nome) : Inimigo(nome){
    this-> _vida = 40;
    this->_ataque = 10;
}

int ProfCalculo2::ataca() {
    return _ataque;
}

void ProfCalculo2::falar() {
    int fala = numeroAleatorio();
    if (fala == 1) {
        cout << "Convergencia de Séries!\n" << endl;
    }
    else if (fala == 2) {
        cout << "Coordenadas Polares!\n" << endl;
    }
    else {
        cout << "Gradiente de Vetor!\n" << endl;
    }
}
