#include <stdio.h>

/* sum��ƪ��w�q */
int sum(int x, int y)
{
   return x+y;
}

int main(void)
{
   int num1, num2, ans;

   printf("�п�J��1�Ӿ�ơG\n");
   scanf("%d",&num1);

   printf("�п�J��2�Ӿ�ơG\n");
   scanf("%d",&num2);

   ans = sum(num1, num2);
   
   printf("�X�p��%d�C\n", ans);

   system("pause");
   return 0;
}
