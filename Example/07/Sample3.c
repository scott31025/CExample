#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,22,50,75};
   int i;

   for(i=0; i<5; i++){
      printf("%d���ǥͪ����Z��%d���C\n", i+1, test[i]);
   }

   system("pause");
   return 0;
}
