#include <stdio.h>
#define DEBUG

int main(void)
{
   int i;
   int sum = 0;
   
   for(i=1; i<=5; i++){

      #ifdef DEBUG
         fprintf(stderr, "變數sum的值為%d。\n", sum);
      #endif
      sum = i + sum;
   }
   printf("1～5為止的合計值為%d。\n", sum);

   system("pause");
   return 0;
}
