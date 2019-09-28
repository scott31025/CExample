#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[100];
   char str2[100];

   printf("請輸入第1個字串。\n");
   scanf("%s", str1);

   printf("請輸入第2個字串。\n");
   scanf("%s", str2);

   if(strcmp(str1, str2) == 0){
      printf("2個字串是相同的。\n");
   }
   else
   {
      printf("這2個字串不一樣。\n");
   }

   system("pause");
   return 0;
}
