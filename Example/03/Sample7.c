#include <stdio.h>

int main(void)
{
   char ch;

   printf("請輸入1個英數字。\n");

   ch = getchar(); 

   printf("輸入的是%c。\n", ch);

   system("pause");
   return 0;
}
