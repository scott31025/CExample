#include <stdio.h>

int main(void)
{
   int num1 = 2;
   int num2 = 3;
   int sum = num1+num2;

   printf("�ܼ�num1���ȬO%d�C\n", num1);
   printf("�ܼ�num2���ȬO%d�C\n", num2);
   printf("num1+num2���ȬO%d�C\n", sum);

   num1 = num1+1;

   printf("�ܼ�num1���ȥ[1��O%d�C\n", num1);

   system("pause");
   return 0;
}
