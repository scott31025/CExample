#include <stdio.h>

/* 結構型態struct Car的宣告 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234, 25.5};
   Car car2 = {4567, 52.2};

   printf("car1的車牌號碼是%d、汽油容量是%f。\n", car1.num, car1.gas);
   printf("car2的車牌號碼是%d、汽油容量是%f。\n", car2.num, car2.gas);

   car2 = car1;

   printf("把car1指定給car2。\n");

   printf("car2的車牌號碼變成%d、汽油容量變成%f。\n", car2.num, car2.gas);

   system("pause");
   return 0;
}
