Batalha.hpp
#ifndef BATALHA_HPP
#define BATALHA_HPP

#include "Personagem.hpp"
#include "Inimigo.hpp"

class Batalha {
    Personagem* personagem;
    Inimigo* inimigo;

public:
    Batalha(Personagem* personagem, Inimigo* inimigo);
    void executaTurno(int escolha);
    bool terminou();
    void executaTurnoInimigo();
};

#endif
