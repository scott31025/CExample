#include<stdio.h>

/* ���c���Astruct Car���ŧi */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   printf("int���A���j�p��%dbyte�C\n", sizeof(int));
   printf("double���A���j�p��%dbyte�C\n", sizeof(double));
   printf("���cstructCar���A���j�p��%dbyte�C\n", sizeof(Car));
   printf("���V���cstruct Car���A�����Фj�p��%dbyte�C\n", sizeof(Car *));

   system("pause");
   return 0;
}
