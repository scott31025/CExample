#include <stdio.h>
#include "myfunc.h"

int main(void)
{
   int num1, num2, ans;

   printf("�п�J��1�Ӿ�ơC\n");
   scanf("%d",&num1);

   printf("�п�J��2�Ӿ�ơC\n");
   scanf("%d",&num2);

   ans = max(num1, num2);
   
   printf("�̤j�Ȭ�%d�C\n", ans);

   system("pause");
   return 0;
} 
