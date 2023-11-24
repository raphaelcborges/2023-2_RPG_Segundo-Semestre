#include <iostream>
#include "Batalha.hpp"
#include "Personagem.hpp"
#include "ProfessorAnaliseNum.hpp"
#include "ProfessorPDS.hpp"

int main() {
    Personagem* aluno = new Personagem("Estudante");
    ProfessorAnaliseNum* profAnalise = new ProfessorAnaliseNum("Prof. Analise Numerica");
    ProfessorPDS* profPDS = new ProfessorPDS("Prof. PDS");
    Batalha* batalha1 = new Batalha(aluno, profAnalise);

    int escolha;
    while (!batalha1->terminou()) {
        std::cout << "Escolha seu ataque (1 ou 2): ";
        std::cin >> escolha;
        batalha1->executaTurno(escolha);
        if (batalha1->terminou()) break;
        batalha1->executaTurnoInimigo();
    }

    delete aluno;
    delete profAnalise;
    delete profPDS;
    delete batalha1;

    return 0;
}
