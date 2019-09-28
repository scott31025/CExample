#include <stdio.h>

int main(void)
{
   int num = 0;
   int cnt = 0;

   /*
   if(cnt++>=1)
   {
      num=1;     
   }
   */
   /*
   if(++cnt>=1)
   {
      num=1;
   }
   */
   if((cnt++)>=1)
   {
      num=1;
   }
   printf("變數num的值是%d。\n", num);

   system("pause");
   return 0;
}
