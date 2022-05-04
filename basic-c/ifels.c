#include<stdio.h>
int main () {

  int z;
 
  printf ("Masukkan nilai integer :");
  scanf ("%d", &z);
  
  if (z >= 0) {
      printf ("Nilai z + %d \n", z);
  }

  else {
      printf ("Nilai a - %d \n", z);
  }
  
  return 0;
}
