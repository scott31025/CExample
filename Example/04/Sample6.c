#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("�п�J��1�Ӿ�ơG\n");
   scanf("%d", &num);
   sum += num;

   printf("�п�J��2�Ӿ�ơG\n");
   scanf("%d", &num);
   sum += num;

   printf("�п�J��3�Ӿ�ơG\n");
   scanf("%d", &num);
   sum += num;

   printf("3�Ӿ�ƪ��X�p�O%d�C\n", sum);

   system("pause");
   return 0;
}
