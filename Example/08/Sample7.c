#include <stdio.h>

/* sum函數的定義 */
int sum(int x, int y)
{
   return x+y;
}

int main(void)
{
   int num1, num2, ans;

   printf("請輸入第1個整數：\n");
   scanf("%d",&num1);

   printf("請輸入第2個整數：\n");
   scanf("%d",&num2);

   ans = sum(num1, num2);
   
   printf("合計為%d。\n", ans);

   system("pause");
   return 0;
}
