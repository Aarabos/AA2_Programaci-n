#include <stdlib.h>

int RandomBetweenRange(int min, int max) {
	return rand() % (max - min + 1) + min;
}