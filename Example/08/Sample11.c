#include <stdio.h>

int a = 0;

/* func��ƪ��w�q */
void func(void)
{
   int b = 0;
   static int c = 0;

   printf("�ܼ�a��%d�ܼ�b��%d�ܼ�c��%d�C\n", a, b, c);

   a++;
   b++;
   c++;
}

/* main��ƪ��w�q */
int main(void)
{
   int i;

   for(i=0; i<5; i++)
      func();

  system("pause");
  return 0;
}
