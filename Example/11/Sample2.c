#include <stdio.h>

/* 結構資料型態struct Car的宣告 */
struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   printf("請輸入車牌號碼。\n");
   scanf("%d", &car1.num);

   printf("請輸入汽油容量。\n");
   scanf("%lf", &car1.gas);

   printf("車牌號碼是%d；汽油容量是%f。\n", car1.num, car1.gas);

   system("pause");
   return 0;
}
