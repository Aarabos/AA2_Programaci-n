#include "Enemy.h"
#include "Player.h"
#include "Header.h"





/*

if (currentHeatlh >= maxHealth * 80 / 100){
	printf("|<<<<<<<<<<|");
} else if (currentHealth <= maxHealth * 80 / 100 && 
			currentHealth >= maxHealth * 60 / 100) {
	printf("|  <<<<<<<<|");
}

*/

//barra de vida del player
void PlayerHealthBar(int health, int maxhealth) {
	int currentHealth = 100;

	if (health == maxhealth) {
		printf("|<<<<<<<<<<|");
	}
	// la barra irá segun la vida maxima que tenga
	else if (currentHealth <= maxhealth *80/100 && 
		currentHealth > maxhealth * 60 / 100) {
		printf("|  <<<<<<<<|");
	}
	else if (currentHealth <= maxhealth * 60 / 100 &&
		currentHealth > maxhealth * 40 / 100) {
		printf("|    <<<<<<|");
	}
	else if (currentHealth <= maxhealth * 40 / 100 &&
		currentHealth > maxhealth * 20 / 100) {
		printf("|      <<<<|");
	}
	else if (currentHealth <= maxhealth * 20 / 100 &&
		currentHealth > 0) {
		printf("|        <<|");
	}
	else {
		printf("|Has muerto|");
	}
}