#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>


enum class EnemyType {
	ZOMBIE,
	VAMPIRE,
	GHOST,
	WEREWOLF,
	MAX
};

struct Enemy {	//Enemy structure ti hold its properties
	EnemyType type;
	std::string name;
	int health;
	std::string getEnemyTypeString() {	//Special function to convert
		switch (type) {
		case EnemyType::ZOMBIE: return "ZOMBIE";
		case EnemyType::GHOST: return "GHOST";
		case EnemyType::VAMPIRE: return "VAMPIRE";
		case EnemyType::WEREWOLF: return "WEREWOLF";
		default:return "";
			
		}
	}
};


bool operator==(const Enemy &a, const Enemy &b) {
	return a.name == b.name && a.type == b.type;
}





static Enemy CreateRandomEnemy() {
	static const int MAX_LIFE{ 500 };
	static const std::string NAMES[]{
	"Pepe",
		"Juan",
		"Abuela",
		"Rodolfo",
		"Matadme",
		"Cansancio"
	};
	return Enemy{
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX)),
	NAMES[rand() % (sizeof NAMES / sizeof std::string)],
		rand() % MAX_LIFE
	};
}



	void main() {
		srand(static_case<unsigned>(time(nullptr)));
		const int MAX_ENEMIES{ 5 };
		Enemy enemies[MAX_ENEMIES];
		{
			int i{ 0 };
			while (i < MAX_ENEMIES) {
				enemies[i] = CreateRandomEnmy();
				int j{ i - 1 };
				if (enemies[i] == enemies[j]) {
					--i;
					break;
				};
				j--;
			};
			++i;
		}



	}

	std::cout << "List of enemies:\n";
	for (auto &enemy : enemies) {
		std::cout << enemy.name <<
			"is a" << enem.getEnemyTypeString() <<
			"whose life is" << enemy.helath << sdt..endl;
	}
	return 0;
	}