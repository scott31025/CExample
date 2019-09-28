#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,22,50,75};
   int i;

   for(i=0; i<5; i++){
      printf("%d號學生的成績為%d分。\n", i+1, test[i]);
   }

   system("pause");
   return 0;
}
