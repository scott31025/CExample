#include<stdio.h>

/* 結構型態struct Car1的宣告 */
typedef struct Car1{
   int num;
   double gas;
   unsigned int tire : 3;
   unsigned int roof : 1;
   unsigned int color : 4;
}Car1;

/* 結構型態struct Car2的宣告 */
typedef struct Car2{
   int num;
   double gas;
   unsigned int tire;
   unsigned int roof;
   unsigned int color;
}Car2;

int main(void)
{
   printf("使用了位元欄的結構，其大小為%dbyte。\n", sizeof(Car1));
   printf("未使用位元欄的結構，其大小為%dbyte。\n", sizeof(Car2));

   system("pause");
   return 0;
}
