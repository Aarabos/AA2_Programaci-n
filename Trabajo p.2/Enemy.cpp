#include "Enemy.h"
#include "CustomMath.h"

void Enemy::Initialize() {
	position.x = RandomBetweenRange(0,4);
	position.y = RandomBetweenRange(0,4);

	isdead = false;

	maxhealth = RandomBetweenRange(60, 90); 
	health = maxhealth;
	

	maxstamina = RandomBetweenRange(60, 90);
	stamina = maxstamina;
}