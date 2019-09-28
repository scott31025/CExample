#include <stdio.h>

int main(void)
{
   char str[100];

   printf("請輸入一個字串。\n");
   gets(str);

   printf("所輸入的字串為%s。\n", str);

   system("pause");
   return 0;
}
