#include "Map.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>


//Inicializamos los atributos de Map
Map::Map(int _diff)
{
	filas = (5 * _diff + rand() % 5);
	columnas = (5 * _diff + rand() % 5);

	md = new char*[filas];
	for (int i = 0; i < filas; i++) {
		md[i] = new char[columnas + 1];
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			md[i][j] = '.';
		}
	}
}


char Map::obtenerCasilla(int i, int j) {
	return md[j][i];
}

void Map::actualizarCasilla(int i, int j, char c) {
	md[j][i] = c;


}
int Map::getFilas()
{
	return filas;
}
int Map::getColumnas()
{
	return columnas;
}

std::ostream & operator<<(std::ostream & out, Map x)
{
	for (int i = 0; i < x.getFilas(); i++) {
		for (int j = 0; j < x.getColumnas(); j++) {
			out << x.obtenerCasilla(j, i) << " ";
		}
		out << std::endl;
	}
	return out;
}


