#include <stdio.h>

int main(void)
{
   int a;

   a = 5;

   printf("變數a的值為%d。\n", a);
   printf("變數a的位址為%p。\n", &a);

   system("pause");
   return 0;
}
