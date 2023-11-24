#ifndef BATALHA_HPP
#define BATALHA_HPP

#include "Personagem.hpp"
#include "OInimigo.hpp"

class Batalha {
    Personagem* personagem;
    OInimigo* inimigo;

public:
    Batalha(Personagem* personagem, OInimigo* inimigo);
    void executaTurno(int escolha);
    bool terminou();
    void executaTurnoInimigo();
};

#endif

