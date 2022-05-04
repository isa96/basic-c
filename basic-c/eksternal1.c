#include <stdio.h>
 
int count ;
extern void write_extern();
 
main() {
   count = 2;
   write_extern();
}
