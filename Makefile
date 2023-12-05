all: clear build main

build:
	mkdir -p build

main: build/main.o Batalha Personagem Item Inimigo ProfCalculo2 ProfAnalNumerica ProfFundMec ProfSistemasDigitais ProfPds2
	g++ -o main build/Batalha.o build/Personagem.o build/Item.o build/Inimigo.o build/ProfCalculo2.o build/ProfAnalNumerica.o build/ProfFundMec.o build/ProfSistemasDigitais.o build/ProfPds2.o build/main.o

build/main.o: src/main.cpp
	g++ -I include -c src/main.cpp -o build/main.o

Batalha: build Inimigo Personagem
	g++ -I include -c src/Batalha.cpp -o build/Batalha.o

ProfCalculo2: build Inimigo
	g++ -I include -c src/ProfCalculo2.cpp -o build/ProfCalculo2.o

ProfAnalNumerica: build Inimigo
	g++ -I include -c src/ProfAnalNumerica.cpp -o build/ProfAnalNumerica.o

ProfFundMec: build Inimigo
	g++ -I include -c src/ProfFundMec.cpp -o build/ProfFundMec.o

ProfSistemasDigitais: build Inimigo
	g++ -I include -c src/ProfSistemasDigitais.cpp -o build/ProfSistemasDigitais.o

ProfPds2: build Inimigo
	g++ -I include -c src/ProfPds2.cpp -o build/ProfPds2.o

Inimigo: build
	g++ -I include -c src/Inimigo.cpp -o build/Inimigo.o

Personagem: build Item
	g++ -I include -c src/Personagem.cpp -o build/Personagem.o

Item: build
	g++ -I include -c src/Item.cpp -o build/Item.o

Extra: build
	g++ -I include -c src/Extra.cpp -o build/Extra.o

Exceptions: build
	g++ -I include -c src/Exceptions.cpp -o build/Exceptions.o

.PHONY: tests all main clear

clear:
	del main

run: main
	./main

