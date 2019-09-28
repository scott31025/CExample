#include <stdio.h>

int main(void)
{
   int res; 

   printf("請輸入整數。\n");

   scanf("%d", &res);

   if (res == 1){
      printf("輸入的是1。\n");
   }
   else{
      printf("輸入的是1以外的數字。\n");
   }

   system("pause");
   return 0;
}
