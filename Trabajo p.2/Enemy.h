#pragma once
#include "Map.h"
#include <cstdlib>

struct Enemy {
	MapPosition position;

	bool isdead;
	
	int health;
	int maxhealth; //110

	int stamina;
	int maxstamina; //110

	void Initialize();
};