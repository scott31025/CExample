#include <stdio.h>

/* max��ƪ��w�q */
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

   printf("�п�J��1�Ӿ�ơG\n");
   scanf("%d",&num1);

   printf("�п�J��2�Ӿ�ơG\n");
   scanf("%d",&num2);

   ans = max(num1, num2);
   
   printf("�̤j�Ȭ�%d�C\n", ans);

   system("pause");
   return 0;
}
