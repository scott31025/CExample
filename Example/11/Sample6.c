#include<stdio.h>

/* 結構型態struct Car的宣告 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   printf("int型態的大小為%dbyte。\n", sizeof(int));
   printf("double型態的大小為%dbyte。\n", sizeof(double));
   printf("結構structCar型態的大小為%dbyte。\n", sizeof(Car));
   printf("指向結構struct Car型態的指標大小為%dbyte。\n", sizeof(Car *));

   system("pause");
   return 0;
}
