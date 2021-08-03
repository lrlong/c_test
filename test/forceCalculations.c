#include <stdio.h>

int something() {
	int x = 1;
	int y = 5;
	return x + y;
}

int else() {
	int garbageCode = 123;
	return garbageCode / 0;
}	
