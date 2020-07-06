#include <stdio.h>
 
int x = 0;
int count ;
extern void write_extern();
 
main() {
   count = 5;
   write_extern();
   x = count * 2;
}
