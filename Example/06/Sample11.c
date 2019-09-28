#include <stdio.h>

int main(void)
{
   int res; 

   printf("請輸入成績。（1～5）\n");
   scanf("%d", &res);

   switch(res){
      case 1:
      case 2:
         printf("還要加強唷！\n");
         break;
      case 3:
      case 4:
         printf("就照這個樣子保持下去。\n");
         break;
      case 5:
         printf("相當優秀唷！\n");
         break;
      default:
         printf("要輸入1～5的成績。\n");
         break;
   }
   
   system("pause");
   return 0;
}
