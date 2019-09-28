#include <stdio.h>

int main(void)
{
   int a, b;
   int *pA;

   a = 5;
   b = 10;

   pA = &a;

   printf("變數a的值為%d。\n", a);
   printf("指標pA的值為%p。\n", pA);
   printf("*pA的值為%d。\n", *pA);

   pA = &b;

   printf("變數b的值為%d。\n", b);
   printf("指標pA的值變更為%p。\n", pA);
   printf("*pA的值為%d。\n", *pA);

   system("pause");
   return 0;
}
