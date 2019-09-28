#include <stdio.h>

/* buy函數的定義 */
void buy(void)
{
   printf("買了車子。\n");
}

/* buy函數的呼叫 */
int main(void)
{
   buy();

   printf("再買進一台車子。\n");

   buy();

   system("pause");
   return 0;
}
