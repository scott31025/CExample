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
   printf("�ܼ�num���ȬO%d�C\n", num);

   system("pause");
   return 0;
}
