#include <stdio.h>
#include <string.h>

struct {
   unsigned int age : 3;
} Age;

int main( ) {

   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   // Age.age = 8;
   // printf( "Age.age : %d\n", Age.age );
   
   // Kenapa 8 tidak bisa ? Karena jumlah angka yang dapat di akumulasi 
   // hanya 0-7 
   // batas value adalah 3 bits berarti 2 pangkat 3 = 8, 
   // jadi nilang yang dapat di hitung 0-7
   // hitungan dimulai dari 0

   return 0;
}
