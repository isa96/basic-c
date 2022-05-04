#include<stdio.h>
int main () {
  
  int i;
  int Tabel[5]= { 1, 90 , 8 , 260, 2};
  int maksimum; 
  int k, simpan; 


  for (i = 0; i < 4; i++ ){
  
     maksimum = i;
     for (k = i+1; k < 5; k++)  {
        if (Tabel[k]> Tabel[maksimum]) {
           maksimum = k;
        }
     } 
 
   
    simpan = Tabel[i];
    Tabel[i] = Tabel[maksimum];
    Tabel[maksimum] = simpan;
  }

  for (i = 0; i < 5; i++) {
        printf (" %d ; ", Tabel[i]);
  }

  return 0;
}
