#include <stdio.h>

int main(void)
{
   double num;

   printf("請輸入小數。\n");

   scanf("%lf", &num);

   printf("%f已輸入。\n", num);

   system("pause");
   return 0;
}
