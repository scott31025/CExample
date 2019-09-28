#include <stdio.h>

int main(void)
{
   int inum;
   double dnum;

   inum = 160;

   printf("身高是%d公分。\n", inum);

   printf("指定成double型態的變數。\n");

   dnum = inum;

   printf("身高是%f公分。\n", dnum);

   system("pause");
   return 0;
}
