#include <stdio.h>

int main(void)
{
   double num;
   
   printf("請輸入小數。\n");
   scanf("%lf", &num);

   printf("如果輸出小數點以下3位的話，就變成%.3f。\n", num);

   system("pause");
   return 0;
}
