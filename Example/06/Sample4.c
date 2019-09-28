#include <stdio.h>

int main(void)
{
   int num, sum;
   int i;

   num = 0;
   sum = 0;

   printf("請問要求從1加到那個數字為止的和呢？\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      sum += i; 
   }

   printf("從1加到%d為止的和為%d。\n", num, sum);

   system("pause");
   return 0;
}
