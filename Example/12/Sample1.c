#include <stdio.h>

int main(void)
{
   int i;
   double d;
   char str[100];

   printf("請輸入一個整數。\n");
   scanf("%d", &i);

   printf("請輸入一個小數。\n");
   scanf("%lf", &d);

   printf("請輸入一個字串。\n");
   scanf("%s", str);

   printf("所輸入的整數為%d。\n", i);
   printf("所輸入的小數為%lf。\n", d);
   printf("所輸入的字串為%s。\n", str);

   system("pause");
   return 0;
}
