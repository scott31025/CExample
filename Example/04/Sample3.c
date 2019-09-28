#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("請輸入第1個整數：\n");

   scanf("%d", &num1);

   printf("請輸入第2個整數：\n");

   scanf("%d", &num2);

   printf("相加之後的結果是%d。\n", num1+num2);

   system("pause");
   return 0;
}
