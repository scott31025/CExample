#include <stdio.h>

int main(void)
{
   int test[5];
   int i;
  
   test[0] = 80;
   test[1] = 60;
   test[2] = 22;
   test[3] = 50;
   test[4] = 75;

   for(i=0; i<5; i++){
      printf("%d���ǥͪ����Z��%d���C\n", i+1, test[i]);
   }

   system("pause");
   return 0;
}
