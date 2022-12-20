#include "Player.h"
#include "CustomMath.h"

void Player::Initialize() {
	position.x = 2;
	position.y = 3;

	gold = 0;

	maxhealth = RandomBetweenRange(90,110); //rand() % (max - min +1) +min
	health = maxhealth;
	//hem calculat la vida inicial al maxhealth

	maxstamina = RandomBetweenRange(90, 110);
	stamina = maxstamina;

	maxagility = 3;
	agility = maxagility;

	maxpotions = 3;
	potions = maxpotions;
}