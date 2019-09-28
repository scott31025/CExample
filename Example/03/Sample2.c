#include <stdio.h>

int main(void)
{
   int num;

   num = 3;

   printf("變數num的值是%d。\n", num);

   num = 5;

   printf("更新變數num的值。\n");
   printf("變數num更新後的值是%d。\n", num);

   system("pause");
   return 0;
}
