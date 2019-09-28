#include <stdio.h>

int main(void)
{
   int i = 1;
   
   while(i <= 5){
      printf("第%d次的迴圈。\n", i);
      i++;
   }
   printf("迴圈結束。\n");

   system("pause");
   return 0;
}
