Inimigo.hpp
#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <iostream>

using namespace std;

class Inimigo {
protected:
    string _nome;
    int _vida;
    int _ataque;

public:

    Inimigo (string nome);
    void recebeDano(int dano);
    bool estaVivo();
    void printInfo();
    int getAtaque();
    string getNome();
    virtual int ataca() = 0;
    virtual void falar() = 0;
    int numeroAleatorio();
};

#endif
