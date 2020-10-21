#include <stdio.h>
 
extern int count;

void read_extern(void) {
   printf("Will attempt to do a 'read'");
}
 
void write_extern(void) {
   printf("Count is %d\n", count);
}

void print_default(void) {
   printf("This is default print.");
}

void double_count(void) {
   printf("Count is doubled %d\n", count * 2);
}

void triple_count(void) {
   printf("Count is tripled %d\n", count * 3);
}

void offset_count(void) {
   printf("Subtract one %d\n", count - 1);
}

void test(void) {
	print("Quick Test");
}