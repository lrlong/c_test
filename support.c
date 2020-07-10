#include <stdio.h>
 
extern int count;
 
void write_extern(void) {
   printf("count is %d\n", count);
}

void print_default(void) {
   printf("This is default print.");
}
