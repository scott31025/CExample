#include <stdio.h>

int main(void)
{
   int a = 1;
   int b = 0;

   printf("short int���A���j�p��%dbyte�C\n", sizeof(short int));
   printf("int���A���j�p��%dbyte�C\n", sizeof(int));
   printf("long int���A���j�p��%dbyte�C\n", sizeof(long int));
   printf("float���A���j�p��%dbyte�C\n", sizeof(float));
   printf("double���A���j�p��%dbyte�C\n", sizeof(double));
   printf("long double���A���j�p��%dbyte�C\n", sizeof(long double));
   printf("�ܼ�a���j�p��%dbyte�C\n", sizeof(a));
   printf("�B�⦡a+b���j�p��%dbyte�C\n", sizeof(a+b));

   system("pause");
   return 0;
}
