#include <stdio.h>

int main(void)
{
   int a = 1;
   int b = 0;

   printf("short int型態的大小為%dbyte。\n", sizeof(short int));
   printf("int型態的大小為%dbyte。\n", sizeof(int));
   printf("long int型態的大小為%dbyte。\n", sizeof(long int));
   printf("float型態的大小為%dbyte。\n", sizeof(float));
   printf("double型態的大小為%dbyte。\n", sizeof(double));
   printf("long double型態的大小為%dbyte。\n", sizeof(long double));
   printf("變數a的大小為%dbyte。\n", sizeof(a));
   printf("運算式a+b的大小為%dbyte。\n", sizeof(a+b));

   system("pause");
   return 0;
}
