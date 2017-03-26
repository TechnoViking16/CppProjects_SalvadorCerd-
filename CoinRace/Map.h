#pragma once
#include <ostream>
class Map
{
private:
	int filas;
	int columnas;
	char **md;


public:			
	friend std::ostream& operator<< (std::ostream &out, Map x);
	Map(int diff);			
	void actualizarCasilla(int i, int j, char c);
	char obtenerCasilla(int i, int j);
	int getFilas();
	int getColumnas();
	



};