#include <stdio.h>

/* ���c���Astruct Car���ŧi */
typedef struct Car{
   int num;
   double gas;
}Car;

/* show��ƪ��ŧi */
void show(Car *pC);

int main(void)
{
   Car car1 = {0, 0.0};

   printf("�п�J���P���X�C\n");
   scanf("%d", &car1.num);

   printf("�п�J�T�o�e�q�C\n");
   scanf("%lf", &car1.gas);

   show(&car1);

   system("pause");
   return 0;
}

/* show��ƪ��w�q */
void show(Car *pC)
{
   printf("���P���X�O%d�B�T�o�e�q�O%f�C\n", pC->num, pC->gas);
}
