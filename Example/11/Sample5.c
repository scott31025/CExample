#include <stdio.h>

/* ���c���Astruct Car���ŧi */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234, 25.5};
   Car car2 = {4567, 52.2};

   printf("car1�����P���X�O%d�B�T�o�e�q�O%f�C\n", car1.num, car1.gas);
   printf("car2�����P���X�O%d�B�T�o�e�q�O%f�C\n", car2.num, car2.gas);

   car2 = car1;

   printf("��car1���w��car2�C\n");

   printf("car2�����P���X�ܦ�%d�B�T�o�e�q�ܦ�%f�C\n", car2.num, car2.gas);

   system("pause");
   return 0;
}
