#include <stdio.h>

int main(void)
{
   double dnum;
   int inum;

   dnum = 160.5;

   printf("身高是%f公分。\n", dnum);

   printf("指定成int型態的變數。\n");

   inum = dnum;

   printf("身高是%d公分。\n", inum);

   system("pause");
   return 0;
}
