#include <stdlib.h>
#include <time.h>
#include <iostream>

void main() {
	int c = 0;
	std::cout << "///////////////////\n" << "     COIN RACE   \n" << "///////////////////\n";
	std::cout << "Los controles son W, A, S y D\nSelecciona una dificultad:\n";
	std::cout << "1-Facil\n2-Medio\n3-Dificil\nDebes recoger 60 monedas\n";

	while (c != 1 && c != 2 && c != 3) {
		std::cin >> c;
		if (c == 1) {
			std::cout << "Facil\n";
		}
		else if (c == 2) {
			std::cout << "Medio\n";
		}
		else if (c == 3) {
			std::cout << "Dificil\n";
		}
		else
			std::cout << "Selecciona la dificultad correctamente\n";


	}
}