#ifndef PROFPDS_HPP
#define PROFPDS_HPP

#include "Inimigo.hpp"
#include <iostream>


class ProfPDS2: public Inimigo {
    int _ataque;
public:
    ProfPDS2(string nome);
    int ataca() override;
    void falar() override;
};

#endif 
