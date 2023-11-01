#include <iostream>
#include "Batalha.hpp"

Batalha::Batalha(Personagem* personagem, Inimigo* inimigo) : personagem(personagem), inimigo(inimigo) {}

void Batalha::executaTurno(int escolha) {
    int dano = personagem->ataca(escolha);
    inimigo->recebeDano(dano);
    std::cout << "Voce foi um bom aluno e a aula do professor ficou " << dano << " vezes mais facil !\n" << std::endl;

    if (!inimigo->estaVivo()) {
        personagem->printInfo();
        inimigo->printInfo();
        std::cout << "Voce passou nessa materia!\n" << std::endl;
        return;
    }

    dano = inimigo->ataca();
    inimigo->falar();
    personagem->recebeDano(dano);
    std::cout << "Mas o professor nao facilitou e voce perdeu " << dano << " de NSG!\n" << std::endl;

    if (!personagem->estaVivo()) {
        personagem->printInfo();
        inimigo->printInfo();
    }
}

bool Batalha::terminou() {
    return !personagem->estaVivo() || !inimigo->estaVivo();
}

void Batalha::executaTurnoInimigo() {
    if (!personagem->estaVivo() || !inimigo->estaVivo()) {
        return;
    }

    int ataqueInimigo = inimigo->ataca();
    personagem->recebeDano(ataqueInimigo);
    inimigo->falar();
    std::cout << "O professor nao foi legal e voce perdeu " << ataqueInimigo << " de NSG" << std::endl;
}
