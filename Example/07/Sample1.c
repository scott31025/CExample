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
      printf("%d號學生的成績為%d分。\n", i+1, test[i]);
   }

   system("pause");
   return 0;
}
