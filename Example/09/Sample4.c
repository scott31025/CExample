#include <stdio.h>

int main(void)
{
   int a, b;
   int *pA;

   a = 5;
   b = 10;

   pA = &a;

   printf("�ܼ�a���Ȭ�%d�C\n", a);
   printf("����pA���Ȭ�%p�C\n", pA);
   printf("*pA���Ȭ�%d�C\n", *pA);

   pA = &b;

   printf("�ܼ�b���Ȭ�%d�C\n", b);
   printf("����pA�����ܧ�%p�C\n", pA);
   printf("*pA���Ȭ�%d�C\n", *pA);

   system("pause");
   return 0;
}
