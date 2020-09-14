#include <stdio.h>
 
int x = 0;
int count ;
extern void write_extern();
 
main() {
   // Just a comment here
   count = 50;
   write_extern();
   x = count * 2;
}
