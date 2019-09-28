#include <stdio.h>
int main(void)
{
   int i;
   int sum = 0;

   fprintf(stderr, "原始碼檔案名稱：%s\n", __FILE__);
   fprintf(stderr, "檔案建立日期：%s\n", __DATE__);
   fprintf(stderr, "檔案建立時間：%s\n", __TIME__);
   for(i=1; i<=5; i++){
      sum = i + sum;
   }
   printf("1～5為止的合計值為%d。\n", sum);

   system("pause");
   return 0;
}
