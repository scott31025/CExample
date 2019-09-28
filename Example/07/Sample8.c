#include <stdio.h>

int main(void)
{
   char str[100];

   printf("請輸入字串。\n");

   scanf("%s", str);

   printf("輸入的字串為%s。\n", str);

   system("pause");
   return 0;
}
