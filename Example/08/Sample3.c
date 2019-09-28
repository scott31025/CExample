#include <stdio.h>

/* buy函數的定義 */
void buy(int x)
{
   printf("買了%d萬元的車子。\n", x);
}

/* buy函數的呼叫 */
int main(void)
{

   buy(20);
   buy(50);

   system("pause");
   return 0;
}
