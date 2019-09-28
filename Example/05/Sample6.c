#include <stdio.h>

int main(void)
{
   char res; 

   printf("你是男生嗎？\n");
   printf("請輸入Y或N。\n");

   res = getchar();

   if (res == 'Y' || res == 'y'){
      printf("你是男生喔。\n");
     }
   else if(res == 'N' || res == 'n'){
      printf("你是女生喔。\n");
   }
   else{
      printf("請輸入Y或N。\n");
   }

   system("pause");
   return 0;
}
