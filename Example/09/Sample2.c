#include <stdio.h>

int main(void)
{
   int a;
   int *pA;
   //int pA;

   a = 5;
   pA = &a;

   printf("�ܼ�a���Ȭ�%d�C\n", a);
   printf("�ܼ�a����}��%p�C\n", &a);
   printf("����pA���Ȭ�%p�C\n", pA);

   system("pause");
   return 0;
}