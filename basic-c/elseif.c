#include<stdio.h>
int main () {
  
  int abc;
  
  printf ("Contoh IF \n");
  printf ("Ketikkan nilai integer: ");
  scanf ("%d", &abc);

  if (abc > 0) {
      printf ("Nilai abc positif %d \n", abc);
  } else if (abc == 0) {
      printf ("Nilai Nol %d \n", abc);
  } else {
      printf ("Nilai abc negatif %d \n", abc);
  }

  return 0;
}
