#include<stdio.h>

int main () {
  
  int i;
  int Tabel[5]= { 1, 50 , 6 , 200, 3 };
  int Z=1; 
 
  
  i = 0;
  while ( (Tabel[i]!=Z) && (i<4) ){
    i++;
  } 
  if (Tabel[i]==Z) {
    printf("indeks bernilai Z = %d", i); 
  } else {
    printf("Nilai tidak ditemukan"); 
  } 
  
  return 0;
}
