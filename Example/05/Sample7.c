#include <stdio.h>

int main(void)
{
   int res;
   char ans;

   printf("請問要選哪條路線？\n");
   printf("請輸入整數。\n");

   scanf("%d", &res);

   ans = (res==1) ? 'A' : 'B'; 

   printf("選擇的是%c路線。\n", ans);

   system("pause");
   return 0;
}
