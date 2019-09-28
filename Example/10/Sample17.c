#include <stdio.h>

/*  函數的宣告 */
void show0(void);
void show1(void);
void show2(void);

int main(void)
{
   void (*pM[3])(void);
   int num;

   pM[0] = show0;
   pM[1] = show1;
   pM[2] = show2;

   printf("要呼叫哪一種交通工具？（0:汽車　1:賽車　2:飛機）\n");
   scanf("%d",&num);

   if(0<= num && num <= 2)
      (*pM[num])();
   
   system("pause");
   return 0;
}

/* 函數的定義 */
void show0(void)
{
    printf("汽車。\n");
}
void show1(void)
{
    printf("賽車。\n");
}
void show2(void)
{
    printf("飛機。\n");
}

