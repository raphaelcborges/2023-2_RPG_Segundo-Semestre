#include "Personagem.hpp"

Personagem::Personagem(string nome) : _nome(nome) {}

void Personagem::recebeDano(int dano) {
    _vida -= dano;
    if (_vida < 0) {
        _vida = 0;
    }
}

void Personagem::printInfo() {
    cout << "------------------------------------------------------------" << endl;
    cout << _nome << " | seu NSG: " << _vida << " / " << _vida_maxima << endl;
    cout << "------------------------------------------------------------" << endl;
}

int Personagem::ataca(int tipo) {
    if (tipo == 1)
        return _ataque1;
    else
        return _ataque2;
}

bool Personagem::estaVivo() {
    return _vida > 0;
}

void Personagem::definirNome(string nome) {
    _nome = nome;
}

string Personagem::getNome() {
    return _nome;
}


void Personagem::usarItem(int indiceItem) {
    if (indiceItem < 0 || indiceItem >= inventario.size()) {
        return;
    }

    _vida += inventario[indiceItem].getValorDeRegeneracao();
    if (_vida > 100) {
        _vida = 100;
    }
    std::cout << "O item regenerou " << inventario[indiceItem].getValorDeRegeneracao() << " do seu NSG\n" << std::endl;
    printInfo();
    inventario.erase(inventario.begin() + indiceItem);
}

void Personagem::addItem(Item item) {
    inventario.push_back(item);
}

std::vector<Item>& Personagem::getInventario() {
    return inventario;
}

void Personagem::exibirInventario() {
    if (inventario.empty()) {
        std::cout << "Voce abriu sua mochila, mas ela estava vazia :( , nesse tempo o professor escreveu no quadro! Isso vai ser descontado no seu NSG!!! (aperte 1 para voltar)" << std::endl;
        std::cout << std::endl;
        std::string escolha;
        while (true) {
            std::getline(std::cin, escolha);
            if (escolha == "1") {
                break;
            }
        }
        return;
    }
    std::cout << "Inventário:\n";
    for (int i = 0; i < inventario.size(); ++i) {
        std::cout << i << ". " << inventario[i].getNome() << " (Regenera " << inventario[i].getValorDeRegeneracao() << " de NSG)\n";
    }
}


int Personagem::getVida() {
    return _vida;
}
