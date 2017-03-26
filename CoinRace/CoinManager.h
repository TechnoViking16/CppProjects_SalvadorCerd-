#pragma once
#include "Map.h"


class CoinManager
{
private:
	int coins;
	Map &m;
public:
	CoinManager(Map &map);
	~CoinManager();
	void actualizarCoins();
	void crearCoins();
	int obtenerCoins();
	
};

