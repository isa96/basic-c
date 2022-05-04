
#include<stdio.h>
int main ()
{
 
  int Tabel [10];
  int i; 

  for (i=0; i<10; i++) {
     scanf ("%d", &Tabel[i]);
  }  
 
  for (i=0; i<5; i++) {
     printf ("Tabel[%d]= %d ;", i,  Tabel[i]);
  }
  printf ("\n");
  
  return 0;
}
