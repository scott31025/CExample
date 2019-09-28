#include <stdio.h>
#include <string.h>

int main(void)
{
   char str[100];

   printf("請輸入一個字串（英數字）。\n");

   scanf("%s", str);

   printf("字串的長度為%d。\n", strlen(str));

   system("pause");
   return 0;
}
