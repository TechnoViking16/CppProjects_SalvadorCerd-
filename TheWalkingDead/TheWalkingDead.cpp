#include<iostream>
#include<string>
#include<ctime>

enum Weapon {
	FISTS,				//Daño 5
	GUN,				//Daño 10		
	SHOTGUN,			//Daño 15
	REVOLVER,			//Daño 20
	SNIPER,				//Daño 25
	MACHINE_GUN,		//Daño 30
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
	void attack(Player &) {
	};
};

class Player {
public:
	void attack(Zombie &) {
	};
	Weapon weapon;
	float precision;
	int life;
	Player();
};



Player::Player() {
	life = rand() % 100;
	precision = rand() % 1;
	int selectArma = rand() % 6;
	
	if (selectArma == 0) {
		weapon = FISTS;
	}
	else if (selectArma == 1) {
		weapon = GUN;
	}
	else if (selectArma == 2) {
		weapon = SHOTGUN;
	}
	else if (selectArma == 3) {
		weapon = GUN;
	}
	else if (selectArma == 4) {
		weapon = REVOLVER;
	}
	else if (selectArma == 5) {
		weapon = SNIPER;
	}
	else if (selectArma == 6) {
		weapon = MACHINE_GUN;
	}

	


}







void attack(Player &P) {

}


void Player::attack(Zombie &Z) {
	

	if (Weapon::FISTS) {
		Z.life= Z.life-(precision * 5);
		
	}
	else if (Weapon::GUN) {
		Z.life = Z.life - (precision * 10);
	}
	else if (Weapon::SHOTGUN) {
		Z.life = Z.life - (precision * 15);
	}
	else if (Weapon::REVOLVER) {
		Z.life = Z.life - (precision * 20);
	}
	
	else if (Weapon::SNIPER) {
		Z.life = Z.life - (precision * 25);
	}
	else if (Weapon::MACHINE_GUN) {
		Z.life = Z.life - (precision *30);
	}
}





void main() {
	srand(time(nullptr));
	Zombie
}