#include <stdio.h>

int main(void)
{
   int a = 0;
   int b = 0;

   b = a++;

   printf("指定後置遞增運算子到b之後的值為%d。\n", b);

   system("pause");
   return 0;
}
