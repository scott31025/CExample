#include <stdio.h>

/* 共同空間型態union Year的宣告 */
typedef union Year{
   int ad;
   int gengo; 
}Year;

int main(void)
{
   Year myyear;
   int a, g;

   printf("請輸入西元年份。\n");
   scanf("%d", &a);

   myyear.ad  = a;

   printf("西元為%d年。\n", myyear.ad);
   printf("民國為%d年。\n", myyear.gengo);

   printf("請輸入民國年份。\n");
   scanf("%d",&g);

   myyear.gengo = g;

   printf("民國為%d年。\n", myyear.gengo);
   printf("西元為%d年。\n", myyear.ad);

   system("pause");
   return 0;
}
