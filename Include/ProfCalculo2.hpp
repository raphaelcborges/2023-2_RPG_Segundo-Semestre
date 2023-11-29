#ifndef PROFCALCULO2_HPP
#define PROFCALCULO2_HPP

#include "Inimigo.hpp"

class ProfCalculo2 : public Inimigo {
    int _ataque;
public:
    ProfCalculo2(string nome);
    int ataca() override;
    void falar() override;
};

#endif 
