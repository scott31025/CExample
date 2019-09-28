#include <stdio.h>

int main(void)
{
   int ch;

   printf("請連續輸入字元。\n");

   while((ch=getchar()) != EOF){
      putchar(ch);
   }

   system("pause");
   return 0;
}
