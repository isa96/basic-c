#include <stdio.h>
 
/* function declaration */
void func(void);
 
static int count = 5; /* global variable */
 
main() {

   while(count--) {
      func();
   }
	
   return 0;
}

/* function definition */
void func( void ) {

   printf("count is %d\n", count);
}
