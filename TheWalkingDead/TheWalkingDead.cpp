#include<iostream>
#include<string>
#include<ctime>

enum Weapon {
	FISTS,				//Da�o 5
	GUN,				//Da�o 10		
	SHOTGUN,			//Da�o 15
	REVOLVER,			//Da�o 20
	SNIPER,				//Da�o 25
	MACHINE_GUN,		//Da�o 30
	MAX				
};


class Zombie;
class Player;

class Zombie {
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
};


void attack(Player &P) {

}


void attack(Zombie &Z) {
	if (Weapon::FISTS) {
		Z.life = Z.life - ;
	}
	else if (Weapon::GUN) {
		
	}
	else if (Weapon::SHOTGUN) {

	}
	else if (Weapon::REVOLVER) {

	}
	
	else if (Weapon::SNIPER) {

	}
	else if (Weapon::MACHINE_GUN) {

	}
}

class Player {
	void attack(Zombie &) {
	};
	Weapon weapon;
	float precision;
	int life;
};



void main() {
	Zombie
}