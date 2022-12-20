#include "Map.h"
#include "Player.h"
#include <time.h>
#include <stdlib.h>
#include "Enemy.h"
//todos los includes que quermos añadir, los añadiremos al Header
//el cpp solamente tiene un include, su header

#define NUM1 5
#define NUM2 5

void PrintMap(Player p, Enemy enemies[]) {
	Enemy enemies[5];
	for (int i = 0; i < 5; i++)
		enemies[i].Initialize();

	printf(" ");
	//print parte arriba
	for (int i = 0; i < 5; i++) {
		printf("___ ");
	}
	printf("\n");

	//print lineas
	for (int i = 0; i < 5; i++) {
		printf("|");
		//print 1ª columna
		for (int j = 0; j < 5; j++) {
			printf("   |");
		}
		printf("\n|");

		//print 2ª columna (MIDDLE PART)
		for (int j = 0; j < 5; j++) {
			char charactertoprint = ' ';
			if (p.position.x == j && p.position.y == i) {
				charactertoprint = 'P';
				printf(" %c |", charactertoprint);
			}

			else
			{ //genera 5 enemigos y comprueba si hay en la misma posicion o no
				bool enemyFound = false;
				for (int k = 0; k <= 5 && !enemyFound; k++) {
					enemyFound = enemies[k].position.x == j && enemies[k].position.y == i;
				}
				if (enemyFound) {
					charactertoprint = 'E';
					printf(" %c |", charactertoprint);
				}
				else
					printf(" %c |", charactertoprint);

				//cofre
			}

		}


		printf("\n|");
		//print 3ª columna
		for (int j = 0; j < 5; j++) {
			printf("___|");
		}
		printf("\n");
	}
}
