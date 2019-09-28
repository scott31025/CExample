#include <stdio.h>
#define MAX(x, y) (x > y ? x : y)

int main(void)
{
   int num1, num2, ans;

   printf("請輸入第1個整數：\n");
   scanf("%d",&num1);

   printf("請輸入第2個整數：\n");
   scanf("%d",&num2);

   ans = MAX(num1, num2);
   
   printf("最大值為%d。\n", ans);

   system("pause");
   return 0;
}
