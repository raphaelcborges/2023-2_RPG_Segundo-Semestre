#ifndef PROFESSORANALISENUM_HPP
#define PROFESSORANALISENUM_HPP

#include "OInimigo.hpp"

class ProfessorAnaliseNum : public OInimigo {
public:
    ProfessorAnaliseNum(string nome);
    int ataca() override;
    void falar() override;
};

#endif
