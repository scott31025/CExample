#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("�ܼ�a���Ȭ�%d�C\n", a);

   *pA = 50;

   printf("��50���w��*pA�C\n");
   printf("�ܼ�a���Ȭ�%d�C\n", a);

   system("pause");
   return 0;
}
