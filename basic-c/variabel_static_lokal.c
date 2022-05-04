#include <stdio.h>
 
/* function declaration */
void func(void);
 
main() {

   
	func();
	
   return 0;
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d\n", i);
}
