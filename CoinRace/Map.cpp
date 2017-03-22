#include "Map.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>


//Inicializamos los atributos de Map
Map::Map(int _diff)
{
	diff = _diff;

	char **dArray;
	dArray = new char *[capFilas];

	//Reservamos los espacios de memoria para el array de chars dArray
	for (int i = 0; i < capFilas; i++)
	{
		dArray[i] = new char[capColum];
	}


	//Creamos las casillas asignándole un "." a cada una 
	for (int i = 0; i <= diff * 5; i++) {
		for (int j = 0; j <= diff * 5; j++) {
			dArray[i][j] = '.';
		}
	}

	//Imprimimos el array, haciendo un salto de linea al final de cada fila
	for (int i = 0; i <= diff * 5; i++) {
		for (int j = 0; j <= diff * 5; j++) {
			std::cout <<  dArray[i][j] << " ";		
		}
		std::cout << "\n";
	}

}

void Map::rellenar() {


}



Map::~Map()
{
}
