#include <stdio.h>

/* buy��ƪ��w�q */
void buy(int x, int y)
{
   printf("�R�F%d�U���P%d�U�������l�C\n", x, y);
}

/* buy��ƪ��I�s */
int main(void)
{
   int num1, num2;

   printf("�n�R�h�ֿ������l�H\n");
   scanf("%d", &num1);

   printf("�n�R�h�ֿ������l�H\n");
   scanf("%d", &num2);

   buy(num1, num2);

   system("pause");
   return 0;
}
