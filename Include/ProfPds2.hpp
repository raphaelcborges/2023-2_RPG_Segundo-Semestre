#ifndef PROFESSORPDS_HPP   
#define PROFESSORPDS_HPP

#include "OInimigo.hpp"   
#include <iostream>

class ProfessorPDS : public OInimigo {
    int _ataque;
public:
    ProfessorPDS(string nome);
    int ataca() override;
    void falar() override;
};

#endif
