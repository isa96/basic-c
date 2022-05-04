#include<stdio.h>

int main () {
  
  int Tabku[5] = {0, 2, 4, 6, 8};
  float TabF[3]= {0.6, 6.6E6, 0.89};
  char TabK[4]= {'5', '9', '%', 'XL'};
 
  int i; 
  
  for (i=0; i<5; i++) {
     printf ("Tabku[%d]= %d ; \n", i,  Tabku[i]);
  }
  printf ("\n");
  for (i=0; i<2; i++){
 	    printf("TabF[%d]= %.2f ; \n", i, TabF[i]);
  } 
  printf ("\n");
  for (i=0; i<4; i++){
 	    printf("TabK[%d]= %c ; \n", i, TabK[i]);
  } 
  printf ("\n");
  for (i=0; i<5; i++) {
     printf ("i = %d  ", i);
     printf (" %d  \n", i+1);
  }
  printf ("\n");
 
  return 0;
}
