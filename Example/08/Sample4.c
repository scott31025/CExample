#include <stdio.h>

/* buy��ƪ��w�q */
void buy(int x, int y)
{
   printf("�R�F%d�U�������l�P%d�U�����Фl�C\n", x, y);
}

/* buy��ƪ��I�s */
int main(void)
{
   int num,num1;

   printf("��1�x�n�R�h�ֿ������l�H\n");
   scanf("%d %d", &num, &num1);

   buy(num, num1);

   printf("��2�x�n�R�h�ֿ������l�H\n");
   scanf("%d %d", &num, &num1);

   buy(num, num1);

   system("pause");
   return 0;
}
