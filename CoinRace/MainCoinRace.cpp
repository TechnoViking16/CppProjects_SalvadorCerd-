#include "Map.h"
#include <iostream>
#include<time.h>
#include<stdlib.h>


void main() {
	int c=0;
	std::cout << "///////////////////\n"<< "     COIN RACE   \n"<<"///////////////////\n" ;
	std::cout << "Los controles son W, A, S y D\nSelecciona una dificultad:\n";
	std::cout << "1-Facil\n2-Medio\n3-Dificil\nDebes recoger 60 monedas\n";
	
	//Selector de dificultad
	while (c != 1 && c != 2 && c != 3) {
		std::cin >> c;
		if (c == 1) 
			Map(1);
		else if (c == 2) 
			Map(2);
		else if (c == 3) 
			Map(3);
		else
			std::cout << "Selecciona la dificultad correctamente\n";
	}
}
