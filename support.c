#include <stdio.h>
 
extern int count;

void read_extern(void) {
   printf("Will attempt to do a 'read'");
}
 
void write_extern(void) {
   printf("count is %d\n", count);
}

void print_default(void) {
   printf("This is default print.");
}

void double_count(void) {
   printf("count is doubled %d\n", count * 2);
}

void triple_count(void) {
   printf("count is tripled %d\n", count * 3);
}

void subtract(void) {
   printf("subtract one %d\n", count - 1);
}
