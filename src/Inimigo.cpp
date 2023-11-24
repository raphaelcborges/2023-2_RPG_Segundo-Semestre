#include "OInimigo.hpp"
#include <cstdlib>

OInimigo::OInimigo(string nome) : _nome(nome), _vida(100), _ataque(10) {}

void OInimigo::recebeDano(int dano) {
    _vida -= dano;
    if (_vida < 0) {
        _vida = 0;
    }
}

bool OInimigo::estaVivo() {
    return _vida > 0;
}

void OInimigo::printInfo() {
    cout << "------------------------------------------------------------" << endl;
    cout << _nome << " | Dificuldade (vida): " << _vida << endl;
    cout << "------------------------------------------------------------\n" << endl;
}

int OInimigo::numeroAleatorio() {
    return rand() % 3 + 1;
}
