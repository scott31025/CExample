#include <stdio.h>

int main(void)
{
   int num1, num2;

   num1 = 3;

   printf("變數num1的值是%d。\n", num1);

   num2 = num1;

   printf("把變數num1指定到變數num2之中。\n");
   printf("變數num2的值是%d。\n", num2);

   system("pause");
   return 0;
}
