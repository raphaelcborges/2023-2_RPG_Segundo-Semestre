#include <string>
#include <iostream>
#include <sstream>
#include "Personagem.hpp"
#include "ProfCalculo2.hpp"
#include "ProfAnalNumerica.hpp"
#include "ProfFundMec.hpp"
#include "ProfSistemasDigitais.hpp"
#include "ProfPds2.hpp"
#include "Batalha.hpp"
#include "Item.hpp"
#include <cstdlib>
#include <ctime>
#include "Extra.hpp"
#include "Exceptions.hpp"

Item itens[10] = {
Item("Calculadora", 10),
Item("Video aula no youtube", 15),
Item("Cafezinho", 20),
Item("Pao de queijo", 25),
Item("Dica de veterano", 30),
Item("Monitoria", 35),
Item("Calculadora cientifica", 45),
Item("Pao de queijo recheado", 45),
Item("Abraco da mamae", 50),
Item("Listas do professor", 30)
};

int lerInt() {
    std::string input = "";
    int valor = 0;

    while (true) {
        std::getline(std::cin, input);

        std::stringstream myStream(input);
        if (myStream >> valor)
            break;

        // Lança a exceção 'letra_invalida'
        try {
            throw exceptions::letra_invalida();
        }
        catch (const exceptions::letra_invalida& e) {
            std::cout << e.what() << "\n" << std::endl;
        }
    }
    return valor;
}

int escolhaMenu() {

    int escolhaMenu = 0;

    while (escolhaMenu > 3 || escolhaMenu < 1) {
        try {
            std::cout << "Escolha uma opcao:\n";
            std::cout << "1. Primeiro dia de aula (inicia o jogo)" << std::endl;
            std::cout << "2. Creditos" << std::endl;
            std::cout << "3. Trancar o curso (sair)\n" << std::endl;
            escolhaMenu = lerInt();
            if (escolhaMenu > 3 || escolhaMenu < 1) {
                throw exceptions::numero_invalido();  
            }
        }
        catch (const exceptions::numero_invalido& e) {
            std::cout << e.what() << "\n" << std::endl; 
            escolhaMenu = 0;  // Reseta o valor de 'escolhaMenu' para garantir que o loop continue
        }
    }

    return escolhaMenu;
}

void vitoria(int vida) {
    std::cout << "------------------------------------------------------------- \n" << std::endl;
    std::cout << "Uauu! Parece que voce conseguiu passar do segundo semestre\n" << std::endl;
    std::cout << "Seu NSG final e de " << vida << " o que significa que no boletim voce tem um: " << std::endl;
    if (vida >= 90) {
        ext::print_a();
    }
    else if (vida >= 80 && vida < 90) {
        ext::print_b();
    }
    else if (vida >= 70 && vida < 80) {
        ext::print_c();
    }
    else if (vida >= 60 && vida < 70) {
        ext::print_d();
    }
    else {
        std::cout << "Parece que mesmo passando, seu NSG ficou abaixo de 60, mas por misericordia os professores arrendondaram, agradeca\n" << std::endl;
    }
}

void iniciarJogo() {
    string nome;

    std::cout << "Antes de comecar, me diga seu nome: " << std::endl;
    while (true) {
        std::getline(std::cin, nome);

        // Verifica se o nome contém apenas letras
        bool apenasLetras = true;
        for (char c : nome) {
            if (!isalpha(c) && !isspace(c)) {
                apenasLetras = false;
                break;
            }
        }

        if (apenasLetras) {
            break;
        } else {
            try {
                throw exceptions::letra_invalida();
            } catch (const exceptions::letra_invalida& e) {
                std::cout << e.what() << std::endl;
            }
        }
    }


    Personagem personagem(nome);

    // Crie os inimigos em um vetor
    Inimigo* inimigos[5] = { new ProfCalculo2("Professor de Calculo2"),
    new ProfAnalNumerica("Professor de Analise Numerica"), new ProfFundMec("Professor de Fundamentos de Mecanica"),
    new ProfSD("Professor de Sistemas Digitais"), new ProfPDS2("Professor de PDS2") };

    int escolha;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Voce entrou na sala do " << inimigos[i]->getNome() << "\n" << endl;
        Batalha batalha(&personagem, inimigos[i]);

        while (!batalha.terminou()) {
            personagem.printInfo();
            inimigos[i]->printInfo();
            std::cout << "O que voce quer fazer?\n1.Fazer pergunta\n2.Sentar na primeira cadeira\n3.Usar um item especial\n4.Trancar o curso" << endl;
            escolha = lerInt();

            if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4) {
                std::cout << "Escolha um numero dentro das opcoes, nem vem..." << std::endl;
            }

        if (escolha == 3) {
    personagem.exibirInventario();
            if (!personagem.getInventario().empty()) {
                std::cout << "Escolha um item para usar: " << std::endl;
                escolha = lerInt();
                personagem.usarItem(escolha); //tratamento de excessao
            }
        batalha.executaTurnoInimigo();
     }
            else if (escolha == 1 || escolha == 2) {
                batalha.executaTurno(escolha);
        }

            else if (escolha == 4) {
                std::cout << "Ja no segundo semestre? ok, nao vou te impedir, adeus!" << std::endl;
                exit(0);
            }
        }

        if (!personagem.estaVivo()) {
            std::cout << "Voce reprovou na materia...\n" << std::endl;
            ext::reprovacao();
            break;
        }
        else {
            if (i != 4) {
                std::cout << "Parabens!\n" << std::endl;
            }
            if (i < 4) { // se não for a última batalha
                std::cout << "O que voce quer fazer agora?\n1. Ir para a proxima aula\n2. Dar uma passadinha no DA\n3. Trancar o curso\n";
                escolha = lerInt();
                switch (escolha) {
                case 1:  // Continuar batalhando
                    break;
                case 2: { // Pegar item
                    int itemAleatorio = rand() % 10;  // Gerando um índice aleatório
                    personagem.addItem(itens[itemAleatorio]);
                    std::cout << "Na sua passadinha pelo hall da engenharia voce adquiriu " << itens[itemAleatorio].getNome() << "!\n" << std::endl;
                    std::cout << "Mas agora voce esta super atrasado pra sua aula entao voce correu e...\n" << endl;
                    break;
                }
                case 3:  // Sair
                    std::cout << "Ja no primeiro semestre? ok, nao vou te impedir, adeus!" << std::endl;
                    exit(0);
                    break;
                default: {
                    std::cout << "Escolha um numero dentro das opcoes, nem vem..." << std::endl;
                }
                }
            }
            else if (i == 4) {
                vitoria(personagem.getVida());
                exit(0);
            }
        }
    }

    if (personagem.estaVivo()) {
        std::cout << "Vitoria! Voce derrotou todos os inimigos!\n";
    }

    // deletando os inimigos
    for (int i = 0; i < 5; ++i) {
        delete inimigos[i];
    }
}

int main() {
    srand(time(0));
    
    ext::iniciar();

    int escolhaMenuInicial = escolhaMenu();
    bool sairDoJogo = false;

    while (!sairDoJogo) {
        switch (escolhaMenuInicial) {
        case 1: {
            iniciarJogo();
            break;
        }
        case 2: {
            bool voltarMenu = false;
            while (!voltarMenu) {
                ext::creditos();
                std::cout << "Agora que voce viu nossos nomes, decida:\n1. Primeiro dia de aula (inicia o jogo)\n2. Trancar o curso (sair)\n" << std::endl;
                int escolhaAlunos = lerInt();
                switch (escolhaAlunos) {
                case 1: {
                    iniciarJogo();
                    break;
                }
                case 2: {
                    sairDoJogo = true;
                    std::cout << "Ja no primeiro semestre? ok, nao vou te impedir, adeus!" << std::endl;
                    exit(0);
                    break;
                }
                default: {
                    std::cout << "vou te mostrar nossos nomes de novo, mas escolha 1 ou 2 e pare de inventar hein..\n" << std::endl;
                }
                }
            }
            break;
        }
        case 3: {
            std::cout << "Ja no segundo semestre? ok, nao vou te impedir, adeus!\n" << std::endl;
            sairDoJogo = true;
            break;
        }
        default: {
            std::cout << "Escolha um numero dentro das opcoes, nem vem...!\n" << std::endl;
            break;
        }
        }
    }
}


