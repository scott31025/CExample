#include <stdio.h>

/* swap��ƪ��ŧi */
void swap(int *pX, int *pY);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("�ܼ�num1���Ȭ�%d�C\n", num1);
   printf("�ܼ�num2���Ȭ�%d�C\n", num2);
   printf("�N�ܼ�num1�Pnum2���ȶi��洫�C\n");

   swap(&num1, &num2);

   printf("�ܼ�num1���s�Ȭ�%d�C\n", num1);
   printf("�ܼ�num2���s�Ȭ�%d�C\n", num2);

   system("pause");
   return 0;
}

/* swap��ƪ��w�q */
void swap(int *pX, int *pY)
{
   int tmp;

   tmp = *pX;
   *pX = *pY;
   *pY = tmp;
}
