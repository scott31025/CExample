#include <stdio.h>

/* swapㄧ计 */
void swap(int *pX, int *pY);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("跑计num1%d\n", num1);
   printf("跑计num2%d\n", num2);
   printf("盢跑计num1籔num2秈︽ユ传\n");

   swap(&num1, &num2);

   printf("跑计num1穝%d\n", num1);
   printf("跑计num2穝%d\n", num2);

   system("pause");
   return 0;
}

/* swapㄧ计﹚竡 */
void swap(int *pX, int *pY)
{
   int tmp;

   tmp = *pX;
   *pX = *pY;
   *pY = tmp;
}
