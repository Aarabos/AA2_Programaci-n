#include "Player.h"
#include <time.h>
#include <stdlib.h>
#include "Enemy.h"
#include "cofres.h"

#define NUM1 5
#define NUM2 5



int main() {
	srand(time(NULL));

	Player p;
	p.Initialize(); // Inicializa Player

	Enemy enemies[5];//Inicializa Enemigo
	enemies[5].Initialize();
	Cofre cofres[5];//

	PrintMap(p,enemies[5]);



	for (int i = 0; i < 5; i++)
		enemies[i].Initialize();

	/*for (int i = 0; i < NUM1; i++) {
		for (int j = 0; j < NUM2; j++) {
			if (p.position.x ==j && p.position.y == i) {
				printf("P"); //printar player
			}
			else {
				bool enemyFound = false;
				//check if an enemy is in this position
				for (int k = 0; k < 5 && !enemyFound; k++){
					enemyFound = enemies[k].position.x == j && enemies[k].position.y == i;
				}
				//if enemy is found, printf 'E'
				//if not, print'*'
				if (enemyFound)
					printf("E");

				else
					printf(" ");
				
				}
		}
		printf("\n");
	}*/

}