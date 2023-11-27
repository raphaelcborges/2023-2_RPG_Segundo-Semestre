#ifndef PROFANALNUMERICA_HPP
#define PROFANALNUMERICA_HPP

#include "Inimigo.hpp"
#include <iostream>

class ProfAnalNumerica : public Inimigo {
    int _ataque;
public:
    ProfAnalNumerica(string nome);
    int ataca() override;
    void falar() override;
};

#endif 
