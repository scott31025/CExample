#include <stdio.h>

/* ���c���Astruct Car���ŧi */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234,25.5};

   printf("���P���X�O%d�F�T���e�q�O%f�C\n", car1.num, car1.gas);

   system("pause");
   return 0;
}
