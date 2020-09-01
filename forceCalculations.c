#include <stdio.h>

extern int targetTenacity;
extern int targetDefense;

int force_lightning(int power) {
	return targetTenacity - (power * 2);
}

int force_choke(int strength) {
	return targetTenacity - strength;
}

int force_push(int power) {
	return targetTenacity - power;
}

int force_saber_throw(int accuracy, int strength){
	return targetDefense - (strength * accuracy);
}
