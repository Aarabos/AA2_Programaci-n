#pragma once
#include "CustomMath.h"
#include "Map.h"

struct Cofre {
	MapPosition cofrePosition;

	bool isOpen;

	int Gold;

	int Potion;

	int item;

	void Initialize();
};