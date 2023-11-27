#ifndef ProfSD_HPP
#define ProfSD_HPP

#include "Inimigo.hpp"
#include <iostream>


class ProfSD : public Inimigo {
    int _ataque;
public:
    ProfSD(string nome);
    int ataca() override;
    void falar() override;
};

#endif 
