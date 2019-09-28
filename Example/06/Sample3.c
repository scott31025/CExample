#include <stdio.h>

int main(void)
{
   int num;
   int i;

   printf("請問要輸出幾個*？\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      printf("*");
   }
   printf("\n");

   system("pause");
   return 0;
}
