#include "Map.h"
#include "Jugador.h"
#include "CoinManager.h"
#include "Input.h"
#include <iostream>
#include<time.h>
#include<stdlib.h>


void main() {
	int diff=0;
	srand(static_cast<unsigned int>(time(nullptr)));
	std::cout << "///////////////////\n"<< "     COIN RACE   \n"<<"///////////////////\n" ;
	std::cout << "Los controles son W, A, S y D\nSelecciona una dificultad:\n";
	std::cout << "1-Facil\n2-Medio\n3-Dificil\n";
	

	if (diff != 1 && diff != 2 && diff != 3) {
		std::cin >> diff;
		if (diff == 1 || diff == 2 || diff == 3) {
			system("cls");
			int NumCoins = 30 * diff + rand() % 30;
			Map m(diff);
			CoinManager c(m);
			Jugador p(m, c);
			std::cout << m << std::endl << "Puntuacion:" << p.getScore() << "/" << NumCoins;
			
			Input::Key input;
			do {
				input = Input::getKey();
				if (input != Input::Key::NONE) {
					p.actualizarJugador(input);
					system("cls");
					std::cout << m << std::endl << "Puntuacion: " << p.getScore() << "/" << NumCoins;
				}
			} while ((input != Input::Key::ESC) && (p.getScore() < NumCoins));

		
			system("cls");
			std::cout << "Fin de la partida";
		}
		
		
		}
		
		

}