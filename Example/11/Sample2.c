#include <stdio.h>

/* ���c��ƫ��Astruct Car���ŧi */
struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   printf("�п�J���P���X�C\n");
   scanf("%d", &car1.num);

   printf("�п�J�T�o�e�q�C\n");
   scanf("%lf", &car1.gas);

   printf("���P���X�O%d�F�T�o�e�q�O%f�C\n", car1.num, car1.gas);

   system("pause");
   return 0;
}
