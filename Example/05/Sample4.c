#include <stdio.h>

int main(void)
{
   int res; 

   printf("請輸入整數。\n");
   scanf("%d", &res);

   if (res == 1){
      printf("輸入的是1。\n");
   }
   else if(res == 2){
      printf("輸入的是2。\n");
   }
   else{
      printf("請輸入1或2。\n");
   }

   system("pause");
   return 0;
}
