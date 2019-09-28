#include <stdio.h>

/* buy函數的定義 */
void buy(int x, int y)
{
   printf("買了%d萬元與%d萬元的車子。\n", x, y);
}

/* buy函數的呼叫 */
int main(void)
{
   int num1, num2;

   printf("要買多少錢的車子？\n");
   scanf("%d", &num1);

   printf("要買多少錢的車子？\n");
   scanf("%d", &num2);

   buy(num1, num2);

   system("pause");
   return 0;
}
