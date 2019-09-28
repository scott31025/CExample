#include <stdio.h>

/* 結構型態struct Car的宣告 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car cars[3];
   int i;

   cars[0].num = 1234; cars[0].gas = 25.5;
   cars[1].num = 4567; cars[1].gas = 52.2;
   cars[2].num = 7890; cars[2].gas = 20.5;

   for(i=0; i<3; i++){
      printf("車牌號碼是%d、汽油容量是%f。\n", cars[i].num, cars[i].gas);
   }

   system("pause");
   return 0;
}
