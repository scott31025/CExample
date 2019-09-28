#include <stdio.h>

/* 結構型態struct Car的宣告 */
typedef struct Car{
   int num;
   double gas;
}Car;

/* show函數的宣告 */
void show(Car c);

int main(void)
{
   Car car1 = {0, 0.0};

   printf("請輸入車牌號碼。\n");
   scanf("%d", &car1.num);

   printf("請輸入汽油容量。\n");
   scanf("%lf", &car1.gas);

   show(car1);

   system("pause");
   return 0;
}

/* show函數的定義 */
void show(Car c)
{
   printf("車牌號碼是%d、汽油容量是%f。\n", c.num, c.gas);
}
