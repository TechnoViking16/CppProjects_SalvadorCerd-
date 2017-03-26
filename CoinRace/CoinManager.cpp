#include "CoinManager.h"



CoinManager::CoinManager(Map &map) :
	m(map)
{
	crearCoins();
}


CoinManager::~CoinManager()
{
}

int CoinManager::obtenerCoins() {
	return coins;
}

void CoinManager::crearCoins()
{
	do {
		coins = static_cast<int>((static_cast<float>(m.getFilas())*static_cast<float>(m.getColumnas())) / 100 * 3 + rand() % static_cast<int>(static_cast<float>(m.getFilas())*static_cast<float>(m.getColumnas()) / 10));
	} while (coins == 0);
	int count = 0;
	while (count < coins)
	{
		int x = rand() % m.getColumnas();
		int y = rand() % m.getFilas();

		if (m.obtenerCasilla(x, y) == '.')
		{
			m.actualizarCasilla(x, y, '$');
			count++;
		}
	}

}

void CoinManager::actualizarCoins()
{
	coins--;
	if (coins <= 0)
		crearCoins();
}