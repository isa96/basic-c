#include<stdio.h>

int main () {

  int BENAR=1;
  int SALAH=0;

   printf ("Hasil BENAR AND BENAR  : %d \n",  BENAR && BENAR );
   printf ("Hasil BENAR OR SALAH  : %d \n",  BENAR || SALAH);
   printf ("Hasil SALAH AND BENAR  : %d \n",  SALAH && BENAR );
   printf ("Hasil SALAH OR SALAH  : %d \n",  SALAH || SALAH );
   printf ("Hasil NOT BENAR  : %d \n", !BENAR);
   printf ("Hasil NOT SALAH  : %d \n", !SALAH );

  return 0;
}
