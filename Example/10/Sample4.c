#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,55,22,75};

   printf("test[0]的值為%d。\n", test[0]);
   printf("test[0]的地址為%p。\n", &test[0]);
   printf("test的值為%p。\n", test);
   printf("test+1的值為%p。\n", test+1);
   printf("*(test+1)的值為%d。\n", *(test+1));

   system("pause");
   return 0;
}
