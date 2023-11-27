#ifndef PROFFUNDMEC_HPP
#define PROFFUNDMEC_HPP

#include "Inimigo.hpp"
#include <iostream>

class ProfFundMec : public Inimigo {
    int _ataque;
public:
    ProfFundMec(string nome);
    int ataca() override;
    void falar() override;
};

#endif 
