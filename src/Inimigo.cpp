#include "Inimigo.hpp"

Inimigo::Inimigo(string nome) : _nome(nome) {}

void Inimigo::recebeDano(int dano) {
    _vida -= dano;
    if (_vida < 0) {
        _vida = 0;
    }
}

bool Inimigo::estaVivo() {
    return _vida > 0;
}

int Inimigo::getAtaque() {
    return _ataque;
}

string Inimigo::getNome() {
    return _nome;
}

void Inimigo::printInfo() {
    cout << "------------------------------------------------------------" << endl;
    cout << _nome << " | Dificuldade (vida): " << _vida << endl;
    cout << "------------------------------------------------------------\n" << endl;
}

int Inimigo::numeroAleatorio() {
    return rand() % 3 + 1;
}
