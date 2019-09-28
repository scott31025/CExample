#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("變數a的值為%d。\n", a);
   printf("變數a的位址為%p。\n", &a);
   printf("指標pA的值為%p。\n", pA);
   printf("*pA的值為%d。\n", *pA);

   system("pause");
   return 0;
}
