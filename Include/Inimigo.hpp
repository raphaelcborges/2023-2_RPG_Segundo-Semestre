#ifndef OINIMIGO_HPP
#define OINIMIGO_HPP

#include <iostream>
using namespace std;

class OInimigo {
protected:
    string _nome;
    int _vida;
    int _ataque;

public:
    OInimigo(string nome);
    virtual ~OInimigo() {}
    void recebeDano(int dano);
    bool estaVivo();
    void printInfo();
    virtual int ataca() = 0;
    virtual void falar() = 0;
    int numeroAleatorio();
};

#endif
