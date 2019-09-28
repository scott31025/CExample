#include <stdio.h>

/* 結構型態struct Car的宣告 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234,25.5};

   printf("車牌號碼是%d；汽車容量是%f。\n", car1.num, car1.gas);

   system("pause");
   return 0;
}
