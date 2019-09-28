#include <stdio.h>

int main(void)
{
   int res; 

   printf("請輸入整數。\n");
   scanf("%d", &res);

   switch(res){
      case 1:
         printf("輸入的是1。\n");
         break;
      case 2:
         printf("輸入的是2。\n");
         break;
      default:
         printf("請輸入1或2。\n");
         break;
   }

   system("pause");
   return 0;
}
