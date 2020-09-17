#include <stdio.h>

extern int targetTenacity;
extern int targetDefense;
extern int targetHealth;

int force_test(int test) {
	// Test
	return test + 1;
}

int force_drain(int power) {
	// Test
	int x = power * (targetTenacity * 0.01);
	return targetHealth * x;
}

int force_lightning(int power) {
	// Test
	return targetTenacity - (power * 2);
}

int force_choke(int strength) {
	return targetTenacity - strength;
}

int force_push(int power) {
	return (targetTenacity * 0.01) - power;
}

int force_saber_throw(int accuracy, int strength){
	return targetDefense - (strength * accuracy);
}

int force_heal(int lifeForce, int power, int strength) {
	// This is a test
	// Some comment here for fun.
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
