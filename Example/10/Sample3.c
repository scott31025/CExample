#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,55,22,75};

   printf("test[0]���Ȭ�%d�C\n", test[0]);
   printf("test[0]���a�}��%p�C\n", &test[0]);
   printf("test���Ȭ�%p�C\n", test);
   printf("�]�N�O��*test���Ȭ�%d�C\n", *test);

   system("pause");
   return 0;
}
