#include <stdio.h>

// The Macro Continuation (\) Operator and The Stringize (#) Operator
#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")

int main(void) {
   message_for(Carole, Debra);
   return 0;
}
