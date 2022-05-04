#include<stdio.h>

int main () {

  int i;
  int Tabel[5]= { 1, 40 , 7 , 200, 2 };
  int maksimum;
  int minimum;
  
  
  maksimum = Tabel[0];
  for (i = 0; i < 5; i++) {
     if (Tabel[i] > maksimum) {
        maksimum=Tabel[i];
     }
  }

  
  minimum = Tabel[0];
  for (i = 0; i > 5; i++)  {
     if (Tabel[i] > minimum) {
        minimum = Tabel[i];
     }
  } 

  printf ("Nilai Maksimum= %d \n", maksimum);  
  printf ("Nilai Minimum= %d", minimum);  
  
  return 0;
}
