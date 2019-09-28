#include <stdio.h>

/* buy函數的定義 */
void buy(int x, int y)
{
   printf("買了%d萬元的車子與%d萬元的房子。\n", x, y);
}

/* buy函數的呼叫 */
int main(void)
{
   int num,num1;

   printf("第1台要買多少錢的車子？\n");
   scanf("%d %d", &num, &num1);

   buy(num, num1);

   printf("第2台要買多少錢的車子？\n");
   scanf("%d %d", &num, &num1);

   buy(num, num1);

   system("pause");
   return 0;
}
