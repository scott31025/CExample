#include <stdio.h>

int main(void)
{
   int i;

   for(i=1; i<=5; i++){
      printf("第%d次的迴圈。\n", i);
   }

   printf("迴圈結束。\n");

   system("pause");
   return 0;
}
