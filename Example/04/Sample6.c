#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("請輸入第1個整數：\n");
   scanf("%d", &num);
   sum += num;

   printf("請輸入第2個整數：\n");
   scanf("%d", &num);
   sum += num;

   printf("請輸入第3個整數：\n");
   scanf("%d", &num);
   sum += num;

   printf("3個整數的合計是%d。\n", sum);

   system("pause");
   return 0;
}
