#include <stdio.h>

int a = 0; 

/* func��ƪ��w�q */
void func(void)
{
   int c = 2;

   printf("�bfunc��Ʒ��i�H�ϥ��ܼ�a�M�ܼ�c�C\n");
   printf("�ܼ�a���Ȭ�%d�C\n", a);
   /* printf("�ܼ�b���Ȭ�%d�C\n", b); */
   printf("�ܼ�c���Ȭ�%d�C\n", c);
}

/* main��ƪ��w�q */
int main(void)
{
   int b = 1;

   printf("�bmain��Ʒ��i�H�ϥ��ܼ�a�M�ܼ�b�C\n");
   printf("�ܼ�a���Ȭ�%d�C\n", a);
   printf("�ܼ�b���Ȭ�%d�C\n", b);
   /* printf("�ܼ�c���Ȭ�%d�C\n", c); */

   func();

   system("pause");
   return 0;
}
