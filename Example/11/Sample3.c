#include <stdio.h>

/* ���c��ƫ��Astruct Car���ŧi */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1;

   car1.num = 1234;
   car1.gas = 25.5;

   printf("���P���X�O%d�F�T���e�q�O%f�C\n", car1.num, car1.gas);

   system("pause");
   return 0;
}
