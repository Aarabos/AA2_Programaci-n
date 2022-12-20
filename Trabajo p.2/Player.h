#pragma once
#include "MapPosition.h"
#include <stdlib.h>

struct Player {
	MapPosition position;
	int gold;

	int health;
	int maxhealth; //110

	int stamina;
	int maxstamina; //110

	int agility;
	int maxagility; //3

	int potions;
	int maxpotions; //3

	void Initialize();

};