#include "cofres.h"

void Cofre::Initialize() {
	cofrePosition.x = RandomBetweenRange(0, 4);
	cofrePosition.y = RandomBetweenRange(0, 4);

	isOpen = false;

	Gold = RandomBetweenRange(10, 120);
	Potion = RandomBetweenRange(0, 2);

	// item que saldrá aleatoriamente


}