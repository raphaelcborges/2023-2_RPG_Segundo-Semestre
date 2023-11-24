#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP
#include <iostream>
using namespace std;

class Personagem {
    string _nome;
    int _vida = 100;
    int _vida_maxima = 100;
    int _ataque1 = 27;
    int _ataque2 = 25;

public:
    Personagem(string nome);
    void recebeDano(int dano);
    int ataca(int tipo);
    bool estaVivo();
    void definirNome(string nome);
    string getNome();
    void printInfo();
    int getVida();
};

#endif
