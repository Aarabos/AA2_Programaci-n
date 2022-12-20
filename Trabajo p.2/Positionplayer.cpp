#include "Map.h"
#include "Player.h"

int main() {
	Player jugador;
	//Inicializa la posición de jugador a (2,3)
	jugador.position.x = 2;
	jugador.position.y = 3;

	PrintMap(jugador);
}