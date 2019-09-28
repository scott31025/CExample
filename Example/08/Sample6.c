#include <stdio.h>

/* buy函數的定義 */
int buy(int x, int y)
{
   int z;
   
   printf("買了%d萬元與%d萬元的車子。\n", x, y);

   z= x+y;

   return z;
}

/* buy函數的呼叫 */
int main(void)
{
   int num1, num2, sum;

   printf("要買多少錢的車子？\n");
   scanf("%d",&num1);

   printf("要買多少錢的車子？\n");
   scanf("%d",&num2);

   sum = buy(num1, num2);
   
   printf("合計為%d萬元。\n", sum);
   //printf("合計為%d萬元。\n", buy(num1, num2));

   system("pause");
   return 0;
}
