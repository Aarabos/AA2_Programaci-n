#pragma once

#define TOTAL_GEAR 10

struct Gear {
	char name[30];
	int goldValue;
	int hp;
	int stamina; 
	int agility;

};

extern Gear gear[TOTAL_GEAR];