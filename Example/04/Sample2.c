#include <stdio.h>

int main(void)
{
   int num1 = 2;
   int num2 = 3;
   int sum = num1+num2;

   printf("變數num1的值是%d。\n", num1);
   printf("變數num2的值是%d。\n", num2);
   printf("num1+num2的值是%d。\n", sum);

   num1 = num1+1;

   printf("變數num1的值加1後是%d。\n", num1);

   system("pause");
   return 0;
}
