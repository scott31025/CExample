#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM] = {80,60,22,50,75};
   int i;

   for(i=0; i<NUM; i++){
      printf("%d���ǥͪ����Z��%d���C\n", i+1, test[i]);
   }

   system("pause");
   return 0;

}
