#include <stdio.h>

/* 結構資料型態struct Car的宣告 */
struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   car1.num = 1234;
   car1.gas = 25.5;

   printf("車牌號碼是%d；汽車容量是%f。\n", car1.num, car1.gas);

   system("pause");
   return 0;
}
