#include <stdio.h>

int main(void)
{
   int num = 1;

   while(num){
      printf("請輸入1個整數：（輸入0時結束）\n");
      scanf("%d", &num);
      printf("輸入的是%d。\n", num);
   }
   printf("迴圈結束。\n");

   system("pause");
   return 0;
}
