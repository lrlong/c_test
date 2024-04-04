#include <stdio.h>

extern int targetTenacity;
extern int targetDefense;
extern int targetHealth;

int force_test(int test) {
	// This is a test;
	int x = 5 * test;
	return x + 2;
}

int force_drain(int power) {
	int x = power * (targetTenacity * 0.015);
	return targetHealth * x;
}

int force_lightning(int power) {
	return targetTenacity - (power * 0.01 * 2);
}

int force_choke(int strength) {
	return targetTenacity - strength;
}

int force_push(int power) {
	return (targetTenacity * 0.015) - power;
}

int force_saber_throw(int accuracy, int strength) {
	return targetDefense - (strength * accuracy) / 1.5;
}

int force_heal(int lifeForce, int power, int strength) {
	int y = power * strength;
	int x = power * (lifeForce * 0.15);
	return targetHealth + (x / y) * 1.5;
}

int force_mind_trick(int power) {
	return targetTenacity - (power * 0.15);
}

int force_pull(int power) {
	return (targetTenacity * 0.01) - power; 
}

int force_mind_read(int power, int strength) {
	return (power * strength) - targetTenacity;
}

int force_fear(int power) {
	int tenacityTotal = targetTenacity * .65;
	return power / tenacityTotal;
}
