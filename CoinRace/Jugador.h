#pragma once
#include "Input.h"
#include "Map.h"
#include "CoinManager.h"

class Jugador
{
private:
	int x, y,puntuacion;
	Map &m;
	CoinManager &c;

public:
	Jugador(Map &map, CoinManager &coin);
	void actualizarJugador(Input::Key k);

	int getScore();												
	int getX();												
	int getY();													

	~Jugador();
};

