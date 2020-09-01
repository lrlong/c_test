#include <stdio.h>

extern int targetTenacity;
extern int targetDefense;
extern int targetHealth;

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

int force_heal(int lifeForce) {
	return targetHealth * (lifeForce * 0.1);
}
