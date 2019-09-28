#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("變數a的值為%d。\n", a);

   *pA = 50;

   printf("把50指定給*pA。\n");
   printf("變數a的值為%d。\n", a);

   system("pause");
   return 0;
}
