/**
 * @file Extra.hpp
 * @author grupo
 * @brief Arquivo de auxílio ao main
 * @version 0.1
 * @date 2023-12-04
 * @details Arquivo auxiliar para imprimir diferentes tipos de mensagens para o jogo
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef EXTRA_HPP
#define EXTRA_HPP

#include <iostream>

namespace ext {
/**
     * @brief Função para exibir mensagem inicial.
     */
	void iniciar() { 	
		std::cout << R"(

			  _                            _           _                     
			 | |                          (_)         | |                    
			 | |__   ___ _ __ ___   __   ___ _ __   __| | ___     __ _  ___  
			 | '_ \ / _ \ '_ ` _ \  \ \ / / | '_ \ / _` |/ _ \   / _` |/ _ \ 
			 | |_) |  __/ | | | | |  \ V /| | | | | (_| | (_) | | (_| | (_) |
			 |_.__/ \___|_| |_| |_|   \_/ |_|_| |_|\__,_|\___/   \__,_|\___/ 
                                                                 
                                                                 
  ___   ___    ___   _   _   _  _   ___     ___      ___   ___   __  __   ___   ___   _____   ___   ___ 
 / __| | __|  / __| | | | | | \| | |   \   / _ \    / __| | __| |  \/  | | __| / __| |_   _| | _ \ | __|
 \__ \ | _|  | (_ | | |_| | | .` | | |) | | (_) |   \__ \ | _|  | |\/| | | _|  \__ \   | |   |   / | _| 
 |___/ |___|  \___|  \___/  |_|\_| |___/   \___/    |___/ |___| |_|  |_| |___| |___/   |_|   |_|_\ |___|
                                                                                                                                                                                                                                           
)" << '\n';


		std::cout << "--------------SEGUNDO SEMESTRE --------------\n" << endl;
	}

     /**
     * @brief Função para exibir créditos do grupo.
     */

	void creditos() {

		std::cout << "\nGRUPO:\nFernanda Vaz\nRaphael Borges\nKayque Borges\n" << endl;
		std::cout << "PROFESSOR: Thiago Noronha\n" << endl;
	}
     /**
     * @brief Função para exibir mensagem de reprovação.
     */

	void reprovacao() {
		std::cout << "Que pena! parece que voce reprovou nessa materia...";
		std::cout << "Infelizmente isso te desmotivou muito e voce acabou trancando o semestre, tente de novo no proximo!\n" << endl;
		exit(0);
	}
     
     /**
     * @brief Função para imprimir nota A.
     */

	void print_a() {
		std::cout << R"(
 .----------------. 
| .--------------. |
| |      __      | |
| |     /  \     | |
| |    / /\ \    | |
| |   / ____ \   | |
| | _/ /    \ \_ | |
| ||____|  |____|| |
| |              | |
| '--------------' |
 '----------------' )" << std::endl;
	}

     /**
     * @brief Função para imprimir nota B.
     */
	void print_b() {
		std::cout << R"(
 .----------------. 
| .--------------. |
| |   ______     | |
| |  |_   _ \    | |
| |    | |_) |   | |
| |    |  __'.   | |
| |   _| |__) |  | |
| |  |_______/   | |
| |              | |
| '--------------' |
 '----------------' 
)" << std::endl;

	}
     /**
     * @brief Função para imprimir nota C.
     */

	void print_c() {
		std::cout << R"(

 .----------------. 
| .--------------. |
| |     ______   | |
| |   .' ___  |  | |
| |  / .'   \_|  | |
| |  | |         | |
| |  \ `.___.'\  | |
| |   `._____.'  | |
| |              | |
| '--------------' |
 '----------------' 

)" << std::endl;

	}
     /**
     * @brief Função para imprimir nota D.
     */
	void print_d() {
		std::cout << R"(


 .----------------. 
| .--------------. |
| |  ________    | |
| | |_   ___ `.  | |
| |   | |   `. \ | |
| |   | |    | | | |
| |  _| |___.' / | |
| | |________.'  | |
| |              | |
| '--------------' |
 '----------------' 


)" << std::endl;

	}

}

#endif;
