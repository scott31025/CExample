#include <stdio.h>

/* max函數的定義 */
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}

int main(void)
{
   int num1, num2, ans;

   printf("請輸入第1個整數：\n");
   scanf("%d",&num1);

   printf("請輸入第2個整數：\n");
   scanf("%d",&num2);

   ans = max(num1, num2);
   
   printf("最大值為%d。\n", ans);

   system("pause");
   return 0;
}
