#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP
#include <iostream>
#include "Item.hpp"
#include <vector>

using namespace std;

class Personagem {
    string _nome;
    int _vida = 100;
    int _vida_maxima = 100;
    int _ataque1 = 27;
    int _ataque2 = 25;
    std::vector<Item> inventario;

public:
    Personagem(string nome);
    void recebeDano(int dano);
    int ataca(int tipo);
    bool estaVivo();
    void definirNome(string nome);
    string getNome();
    void addItem(Item item);
    void usarItem(int indiceItem);
    std::vector<Item>& getInventario();
    void exibirInventario();
    void printInfo();
    int getVida();
};

#endif
