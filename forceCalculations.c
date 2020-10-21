#include <stdio.h>

extern int targetTenacity;
extern int targetDefense;
extern int targetHealth;

int force_test(int test) {
	return test + 1;
}

int force_drain(int power) {
	int x = power * (targetTenacity * 0.01);
	return targetHealth * x;
}

int force_lightning(int power) {
	return targetTenacity - (power * 2);
}

int force_choke(int strength) {
	return targetTenacity - strength;
}

int force_push(int power) {
	return (targetTenacity * 0.01) - power;
}

int force_saber_throw(int accuracy, int strength) {
	return targetDefense - (strength * accuracy);
}

int force_heal(int lifeForce, int power, int strength) {
	int y = power * strength;
	int x = power * (lifeForce * 0.1);
	int z = x + y;
	return targetHealth + x;
}

int force_mind_trick(int power) {
	return targetTenacity - (power * 0.1);
}

int force_pull(int power) {
	return (targetTenacity * 0.01) - power; 
}

int force_mind_read(int power, int strength) {
	return (power * strength) - targetTenacity;
}

int force_fear(int power) {
	return power / targetTenacity;
}
