#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("請問要在第幾次終止迴圈呢？（1～10）\n");

   scanf("%d", &res);

   for(i=1; i<=10; i++){
      printf("第%d次的處理。\n", i);
      if(i == res)
         break;
   }

   system("pause");
   return 0;
}

