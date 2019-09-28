#include <stdio.h>

/* 岿粇swapㄧ计 */
void swap(int x, int y);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("跑计num1%d\n", num1);
   printf("跑计num2%d\n", num2);
   printf("盢跑计num1籔num2秈︽ユ传\n");

   swap(num1, num2);

   printf("跑计num1穝%d\n", num1);
   printf("跑计num2穝%d\n", num2);

   system("pause");
   return 0;
}

/* 岿粇swapㄧ计﹚竡 */
void swap(int x, int y)
{
   int tmp;

   tmp = x;
   x = y;
   y = tmp;
}
