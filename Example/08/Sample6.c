#include <stdio.h>

/* buy��ƪ��w�q */
int buy(int x, int y)
{
   int z;
   
   printf("�R�F%d�U���P%d�U�������l�C\n", x, y);

   z= x+y;

   return z;
}

/* buy��ƪ��I�s */
int main(void)
{
   int num1, num2, sum;

   printf("�n�R�h�ֿ������l�H\n");
   scanf("%d",&num1);

   printf("�n�R�h�ֿ������l�H\n");
   scanf("%d",&num2);

   sum = buy(num1, num2);
   
   printf("�X�p��%d�U���C\n", sum);
   //printf("�X�p��%d�U���C\n", buy(num1, num2));

   system("pause");
   return 0;
}
