#include <stdio.h>

/*max函數的宣告 */
int max(int x, int y);

int main(void)
{
   int num1, num2, ans;
   int (*pM)(int x, int y);

   pM = max;

   printf("請輸入第1個數值。\n");
   scanf("%d",&num1);

   printf("請輸入第2個數值。\n");
   scanf("%d",&num2);

   ans = (*pM)(num1, num2);
   
   printf("最大值為%d。\n", ans);

   system("pause");
   return 0;
}

/* max函數的定義 */
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}
