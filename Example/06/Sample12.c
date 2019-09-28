#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("要跳過第幾次的處理？（1～10）\n");
   scanf("%d", &res);

   for(i=1; i<=10; i++){
      if(i == res)
         continue;
      printf("第%d次的處理。\n", i);
   }

   system("pause");
   return 0;
}
