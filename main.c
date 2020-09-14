#include <stdio.h>
 
int x = 0;
int count ;
extern void write_extern();
 
main() {
   // Just a comment here
   count = 4;
   write_extern();
   x = count * 2;
}
