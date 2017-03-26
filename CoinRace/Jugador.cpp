#include "Jugador.h"
#include <iostream>



Jugador::Jugador(Map &map, CoinManager &coin) :
	m(map), c(coin), x(0), y(0), puntuacion(0)
{
	x = (rand() % m.getFilas());
	y = (rand() % m.getColumnas());
	m.actualizarCasilla(x, y, '@');
	
}

void Jugador::actualizarJugador(Input::Key k)
{
	int anterior_x = x;
	int anterior_y = y;

	switch (k) {
	case Input::Key::W:
		if (y > 0) {
			y = y - 1;
		}
		break;
	case Input::Key::A:
		if (x > 0) {
			x = x - 1;
		}
		break;
	case Input::Key::S:
		if (y < m.getFilas()-1) {
			y = y +1;
		}
		break;

	case Input::Key::D:
		if (x < m.getColumnas() - 1) {
			x = x + 1;
		}
		break;
	case Input::Key::NONE:
		break;

	}
	if (m.obtenerCasilla(x, y) == '$')
	{
		puntuacion++;
		c.actualizarCoins();
	}
	
	m.actualizarCasilla(anterior_x, anterior_y, '.');
	m.actualizarCasilla(x, y, '@');
}

int Jugador::getScore()
{
	return puntuacion;
}

int Jugador::getX()
{
	return x;
}

int Jugador::getY()
{
	return y;
}



Jugador::~Jugador()
{
}
