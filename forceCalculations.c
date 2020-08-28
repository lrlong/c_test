#include <stdio.h>

extern int targetTenacity;

int force_lightning(int power) {
	return targetTenacity - (power * 2);
}

