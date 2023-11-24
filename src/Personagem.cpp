#include "Personagem.hpp"

Personagem::Personagem(string nome) : _nome(nome) {}

void Personagem::recebeDano(int dano) {
    _vida -= dano;
    if (_vida < 0) {
        _vida = 0;
    }
}

void Personagem::printInfo() {
    cout << "------------------------------------------------------------" << endl;
    cout << _nome << " | seu NSG: " << _vida << " / " << _vida_maxima << endl;
    cout << "------------------------------------------------------------" << endl;
}

int Personagem::ataca(int tipo) {
    if (tipo == 1)
        return _ataque1;
    else
        return _ataque2;
}

bool Personagem::estaVivo() {
    return _vida > 0;
}

void Personagem::definirNome(string nome) {
    _nome = nome;
}

string Personagem::getNome() {
    return _nome;
}

int Personagem::getVida() {
    return _vida;
}
